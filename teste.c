#include <stdio.h>
int
factrec (int n) {
  int a, b;
  if (n == 1) {
    b = 1;
  } else {
    a = n - 1;
    b = n * factrec (a);

  }

  return b;


}

void
main () {
  printf ("%d\n", factrec (3));
}
