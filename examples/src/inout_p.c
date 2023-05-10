#include "inout_p.h"

// Start of main
int main() {
  int n = 10;

  // first example
  float *a;
  printf("A address is: %p\n", a);
  a = f1(n);
  array_print(a, n);
  printf("A address is: %p\n", a);

  // second example
  float *b = NULL;
  f2(b, n);
  printf("B address is: %p\n", b);
  // array_print(b, n); // segmentation error

  // third example(double pointer)
  float *c = NULL;
  f3(&c, n);
  printf("C address is: %p\n", c);
  array_print(c, n);

  free(a);
  free(b);
  free(c);

  return 0;
} // end of main