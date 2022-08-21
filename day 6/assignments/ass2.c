#include <stdio.h>

void main()
{

int x=5,y=6,z=7 ;
int *p=&x  ;
int *q=&y  ;
int *r=&z  ;

printf("the value of x is : %d\n",x);
printf("the value of y is : %d\n",y);
printf("the value of z is : %d\n",z);
printf("the value of pointer p is : %d\n",p);
printf("the value of pointer q is : %d\n",q);
printf("the value of pointer r is : %d\n",r);
printf("the value of *p is : %d\n",*p);
printf("the value of *q is : %d\n",*q);
printf("the value of *r is : %d\n",*r);

printf("swapping pointers");

  r=p ;
  p=q ;
  q=r ;

printf("the value of x is : %d\n",x);
printf("the value of y is : %d\n",y);
printf("the value of z is : %d\n",z);
printf("the value of pointer p is : %p\n",p);
printf("the value of pointer q is : %p\n",q);
printf("the value of pointer r is : %p\n",r);
printf("the value of *p is : %d\n",*p);
printf("the value of *q is : %d\n",*q);
printf("the value of *r is : %d\n",*r);

}