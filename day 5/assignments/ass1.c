#include<stdio.h>

void main()
{

int max,mini ;
int arr_size=10 ;
int arr[arr_size];

for(int i=0;i<=arr_size-1;i++)
{
printf("please enter the element number_%d : ",i);
scanf("%d",&arr[i]);
}

mini=arr[0] ;
max=arr[0] ;

for(int i=0;i<=arr_size-1;i++)
{
	if(max>arr[i])
	{
		max=max ;
	}
	else 
	{
		max=arr[i] ;
	}
}

for(int i=0;i<=arr_size-1;i++)
{
	if(mini<arr[i])
	{
		mini=mini ;
	}
	else 
	{
		mini=arr[i] ;
	}
}
 
 printf("the maximum number is : %d\n",max);
 printf("the minimum number is : %d",mini);
 

}