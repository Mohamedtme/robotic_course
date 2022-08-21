#include<stdio.h>

void main()
{
int num ;
int x=0 ;
int arr_size=10 ;

int arr[arr_size];

for(int i=0;i<=arr_size-1;i++)
{
printf("please enter the element number_%d : ",i);
scanf("%d",&arr[i]);
}
printf("enter number to search about : ");
scanf("%d",&num);

for(int i=0;i<=arr_size-1;i++){
	arr[i];
if(num==arr[i])
{
	x=++x	;
}
}
if(x>0){
printf("the value exist : %d",x);
}
else
{
	printf("the valye not exist");
}
}