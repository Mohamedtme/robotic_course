#include<stdio.h>

int maximum(int x,int y,int z,int k);
int minimum(int x,int y,int z,int k);

void main()
{
	
int x,y,z,k ;	
	
printf("enter first number : ");
scanf("%d",&x);

printf("enter first number : ");
scanf("%d",&y);

printf("enter first number : ");
scanf("%d",&z);

printf("enter first number : ");
scanf("%d",&k);

printf("the maximum number is : %d\n",maximum(x,y,z,k));
printf("the minimum number is : %d\n",minimum(x,y,z,k));

}

int maximum(int x,int y,int z,int k)
{
	int max ;
	if(x>y)
	{
		max=x;
	}
	else
	{
		max=y;
	}
	if(max>z)
	{
		max=max;
	}
	else 
	{
		max=z;
	}
		if(max>k)
	{
		max=max;
	}
	else 
	{
		max=k;
	}
	
	return max ;
}

int minimum(int x,int y,int z,int k)
{
		int mini ;
	if(x>y)
	{
		mini=y;
	}
	else
	{
		mini=x;
	}
	if(mini<z)
	{
		mini=mini;
	}
	else 
	{
		mini=z;
	}
		if(mini<k)
	{
		mini=mini;
	}
	else 
	{
		mini=k;
	}
	
	return mini ;
}