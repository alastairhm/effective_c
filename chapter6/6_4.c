#include <stdio.h>
#include <stdlib.h>
//#include <dirent.h>
#include <unistd.h>

typedef struct {
  char* d_buf;
  char d_fd;
} DIR;

int closedir(DIR *dirp){
  int result = close(dirp->d_fd);
  free(dirp->d_buf);
  free(dirp);
  return result;
}

int main(void) {
  DIR* dir = malloc(sizeof(DIR));
  dir->d_fd = 0;
  dir->d_buf = NULL;
  printf("%d\n", closedir(dir));
  return EXIT_SUCCESS;
}

