#include<stdio.h>

int func(int x,int y);

void main()
{

int arr[3]={5,6,7};
int sum=0 ;

for(int i=0;i<3;i++)
{
sum += *(arr+1);
}

printf("the sum of numbers is : %d",sum);

}