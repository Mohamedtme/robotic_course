
#include<stdio.h>

void main()
{

int x ;
int fact = 1;
int i ;

printf("enter tne number\n");
scanf("%d",& x);

i=1;
while(x>i)
{
	fact=fact*x ;
	x-- ;
}

printf("factorial is : %d", fact );

}