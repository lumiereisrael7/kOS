#include<stdio.h>




typedef struct
{
  int a;
  int b;
  int c;
}INT;



int main(void)
{
  INT* p = (INT*)2;

  printf("%p",&(p->a));
  printf("\n %p",&(p->b));
  return 0;
}
