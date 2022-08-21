
#include<stdio.h>

int max(int num1,int num2);

int x=5,y=7;
void swap(int num1,int num2);

void main()
{
	swap(x,y);
	printf("x= %d\n",x);
	printf("y= %d\n",y);
}
	
	
	void swap(int num1,int num2)
	{
		int number ;
	number=x ;
	x=y;
	y=number ;
			
	}
	