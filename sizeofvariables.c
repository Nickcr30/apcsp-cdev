#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));

  char b = 'c';
  // print value and size of a char variable
  printf("char b value: %c and size: %lu bytes\n", b, sizeof(b));

  float c = 32.456;
  // print value and size of float variable
  printf("float c value: %f and size: %lu bytes\n", c, sizeof(c));

  double d = 384.286;
  // print value and size of double variable
  printf("double d value: %f and size: %lu\n", d, sizeof(d));

  long int e = 545;
  // print value and size of a long int variable
  printf("long int e value: %d and size: %lu\n", e, sizeof(e));

  signed char f = 'h';
  // print value and size of signed char variable
   printf("signed char f value: %c and size: %lu\n", f, sizeof(f));



}

