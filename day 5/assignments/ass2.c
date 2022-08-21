#include<stdio.h>

void main()
{

int fail=0 ;	
int fail1=0 ;	
int fail2=0 ;		
int fail3=0 ;

int pass=0 ;	
int	pass1=0 ;
int	pass2=0 ;
int	pass3=0 ;

	
float avr ;	
float sum ;
int sum1=0 ;
int sum2=0 ;
int sum3=0 ;

int max1,mini1,max2,mini2,max3,mini3 ;
int max0,mini0;
int arr_size=10 ;
int arr1[arr_size];
int arr2[arr_size];
int arr3[arr_size];

for(int i=0;i<=arr_size-1;i++)
{
printf("please enter the element number_%d of array1: ",i);
scanf("%d",&arr1[i]);
}

printf("\n\n");

for(int i=0;i<=arr_size-1;i++)
{
printf("please enter the element number_%d of array2 : ",i);
scanf("%d",&arr2[i]);
}

printf("\n\n");

for(int i=0;i<=arr_size-1;i++)
{
printf("please enter the element number_%d of array3 : ",i);
scanf("%d",&arr3[i]);
}


mini1=arr1[0] ;
max1=arr1[0] ;

for(int i=0;i<=arr_size-1;i++)
{
	if(max1>arr1[i])
	{
		max1=max1;
	}
	else 
	{
		max1=arr1[i] ;
	}
}

for(int i=0;i<=arr_size-1;i++)
{
	if(mini1<arr1[i])
	{
		mini1=mini1 ;
	}
	else 
	{
		mini1=arr1[i] ;
	}
}


mini2=arr2[0] ;
max2=arr2[0] ;

for(int i=0;i<=arr_size-1;i++)
{
	if(max2>arr2[i])
	{
		max2=max2 ;
	}
	else 
	{
		max2=arr2[i] ;
	}
}

for(int i=0;i<=arr_size-1;i++)
{
	if(mini2<arr2[i])
	{
		mini2=mini2 ;
	}
	else 
	{
		mini2=arr2[i] ;
	}
}


mini3=arr3[0] ;
max3=arr3[0] ;

for(int i=0;i<=arr_size-1;i++)
{
	if(max3>arr3[i])
	{
		max3=max3 ;
	}
	else 
	{
		max3=arr3[i] ;
	}
}

for(int i=0;i<=arr_size-1;i++)
{
	if(mini3<arr3[i])
	{
		mini3=mini3 ;
	}
	else 
	{
		mini3=arr3[i] ;
	}
}

max0=max1;
mini0=mini1;

if(max0>max2)
{
	max0=max0 ;
}
else if(max2>max0)
{
	max0=max2 ;
}
if(max0>max3)
{
	max0=max0 ;
}
else 
{
	max0=max3 ;
}
 
if(mini0<mini2)
{
	mini0=mini0 ;
}
else if(mini2<mini0)
{
	mini0=mini2 ;
}
if(mini0<mini3)
{
	mini0=mini0 ;
}
else 
{
	mini3=mini0 ;
}

printf("the highest grade is : %d\n",max0);
printf("the lowest grade is : %d\n",mini0);

for(int i=0;i<=arr_size-1;i++)
{
	arr1[i];
	sum1=sum1+arr1[i] ;
}

for(int i=0;i<=arr_size-1;i++)
{
	arr2[i];
	sum2=sum2+arr2[i] ;
}

for(int i=0;i<=arr_size-1;i++)
{
	arr3[i];
	sum3=sum3+arr3[i] ;
}
sum=sum1+sum2+sum3 ;
avr=sum/30 ;

printf("the average of grades is : %f\n",avr);
 
 
 for(int i=0;i<=arr_size-1;i++)
 {
	 arr1[i] ;
	 if(arr1[i]>=50)
	 {
		pass1=++pass1 ; 
	 }
	 else 
	 {
		 fail1=++fail1 ;
	 }
	 
 }

 for(int i=0;i<=arr_size-1;i++)
 {
	 arr2[i] ;
	 if(arr2[i]>=50)
	 {
		pass2=++pass2; 
	 }
	 else 
	 {
		fail2=++fail2 ;
	 }
	 
 }
 
 for(int i=0;i<=arr_size-1;i++)
 {
	 arr3[i] ;
	 if(arr3[i]>=50)
	 {
		pass3=++pass3 ; 
	 }
	 else 
	 {
		fail3=++fail3 ;
	 }
	 
 }
 
    pass=pass1+pass2+pass3 ;
    fail=fail1+fail2+fail3 ;
 
 printf("the number of passed student is : %d\n",pass);
  printf("the number of failed student is : %d",fail);
 
 
}