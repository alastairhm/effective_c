#include <stdio.h>
#include <stdlib.h>

typedef struct {} object_t;


int do_something(void) {
  FILE *file1, *file2;
  object_t *obj;
  int ret_val = 0; // Initially assume a successful return value

  file1 = fopen("a_file", "w");
  if (file1 == NULL) {
    printf("Could not open file 1.\n");
    ret_val = -1;
    goto FAIL_FILE1;
  }

  file2 = fopen("another_file", "w");
  if (file2 == NULL) {
    printf("Could not open file 2.\n");
    ret_val = -1;
    goto FAIL_FILE2;
  }

  obj = malloc(sizeof(object_t));
  if (obj == NULL) {
    printf("Could not allocate object.\n");
    ret_val = -1;
    goto FAIL_OBJ;
  }

  // Operate on allocated resources

  // Clean up everything
  free(obj);
FAIL_OBJ:  // Otherwise, close only the resources we opened
  fclose(file2);
FAIL_FILE2:
  fclose(file1);
FAIL_FILE1:
  return ret_val;
}

int main(void) {
  return do_something();
}