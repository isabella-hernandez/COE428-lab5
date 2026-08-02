#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

extern void addHeap(int);
extern int heapDelete();
extern int heapSize();

int main(int argc, char * argv[])
{
  int value;
  while (scanf("%d\n", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
    addHeap(value);
  }
  /* XML printing goes here if your heap provides a print function */

    /* Print in descending order while pushing onto the stack */
    while (heapSize() > 0) {
        value = heapDelete();
        printf("%d\n", value);
        push(value);
    }

    /* Print in ascending order */
    while (!isEmpty()) {
        printf("%d\n", pop());
    }

    return 0;
}
