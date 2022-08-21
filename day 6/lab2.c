#include<stdio.h>

int func(int x,int y);

void main()
{
int x,y ;

printf("enter first value : ");
scanf("%d",&x);

printf("enter second value : ");
scanf("%d",&y);

printf("the sum of numbers is : %d",func(x,y));

}

int func(int x,int y)
{
int *ptr1 =&x ;
int *ptr2 =&y ;
int sum,z,k ;

z=*ptr1 ;
k=*ptr2 ;
sum=z+k ;

return sum ;
}