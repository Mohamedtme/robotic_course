
#include<stdio.h>

void main()
{

int x ;         /*the number */
int mult=1 ;
printf("enter the number \n");
scanf("%d",& x);

for(int i=1;i<=10;i++)
{

mult= i*x ;
printf("%d x %d = %d\n",i,x,mult);

}


}