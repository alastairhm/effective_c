#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  char c[10];
  int i;
  double d;
} widget;

void display_widget(widget *p) {
  printf("p.c = %s\n",p->c);
  printf("p.i = %d\n",p->i);
  printf("p.d = %f\n",p->d);
}

int main(void){
  widget *p = malloc(sizeof(widget));
  if (p == NULL){
    printf("Memory not allocated\n");
    return 1;
  } else {
    printf("Memory allocated\n");
    widget w = {"Test", 9, 3.2};
    memcpy(p, &w, sizeof(widget));
    display_widget(p);
    free(p);
  }
  return 0;
}
