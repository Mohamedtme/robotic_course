
#include<stdio.h>

int max(int num1,int num2);

void main()
{
int x,y,z;

printf("enter the first number : ");
scanf("%d",& x);
printf("enter the second number : ");
scanf("%d",& y);

z=max(x,y);

printf("the maximum number is : %d", z);
}

int max(int num1,int num2)
{
int maxi ;
if(num1>num2)
{
maxi = num1 ;
}
else 
{
maxi = num2 ;
}
return maxi;
}