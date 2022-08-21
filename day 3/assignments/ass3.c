
#include<stdio.h>

void main()
{
int x ;

   printf("please enter the height of the pyramide :  "); 
   scanf("%d",& x);

   for(int i=1;i<=x;i++)
{
   for(int z=1;z<=x-1;z++)
{
  printf(" ");
}
for(int k=1;k<=(2*i-1);k++)
{
	printf("*");
}
    printf("\n");
}

}