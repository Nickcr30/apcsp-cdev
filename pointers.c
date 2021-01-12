#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

  float d = 1.234;
  float* ptrtod = &d;

  printf("The value of d is %f\n", d);
  printf("The address of d is %p\n", &d);

  float e = 2.345;
  float* ptrtoe = &e;

  printf("The value of e is %f\n", e);
  printf("The address of e is %p\n", &e);

  float f = *ptrtod;
  d = e;
  e = f;

 printf("The value of e is %f and the value of d is %f\n", e, d);

}
