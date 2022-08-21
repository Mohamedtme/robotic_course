#include <stdio.h>

void main()
{

int sizeofarray ;
int arr[sizeofarray];


printf("enter the size of arrray : ");
scanf("%d",sizeofarray);

for(int k=1;k<=sizeofarray;k++)
{
printf("please enter the element number_%d of array: ",k);
scanf("%d",&arr[k-1]);
}
printf("%d",arr[sizeofarray]);



}



