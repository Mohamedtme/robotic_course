
#include<stdio.h>

void main()
{

int y  ;
int sum=0 ;
float avr ;

for(int i=0 ;i<10 ;i++)
{
printf("enter the number\n");
scanf("%d",& y);
sum+=y ;
}
avr =sum/10 ;
 
 printf("sum is : %d\n", sum);
 printf("avereg is : %f\n", avr);
 
}