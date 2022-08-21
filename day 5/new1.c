#include<stdio.h>

void main()
{
int sum=0;
float avr;
int arr_size=10 ;

int arr[arr_size];

for(int i=0;i<=arr_size-1;i++)
{
printf("please enter the element number_%d : ",i);
scanf("%d",&arr[i]);
}
for(int i=0;i<=arr_size-1;i++)
{
	arr[i];
	sum=sum+arr[i] ;
}
avr=sum/10 ;

printf("the sum of numbers is : %d\n",sum);
printf("the average of numbers is : %.2f",avr);

}