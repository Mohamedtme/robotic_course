
#include<stdio.h>

int add(int x,int y);
int sub(int x,int y);
int multi(int x,int y);
int divid(int x,int y);
int reminder(int x,int y);
int increment(int x);
int decrement(int x);

void main()
{

int ID,operand,m,z,x,y;

    printf("1 : for adding\n");
    printf("2 : for subtract\n");
    printf("3 : for multiply\n");
    printf("4 : for divid\n");
    printf("5 : for reminder\n");
    printf("6 : for increament\n");
    printf("7 : for decrement\n");

    printf("please enter the operation ID : ");
    scanf("%d",&ID);
	
	
    if(ID!=1||ID!=2||ID!=3||ID!=4||ID!=5||ID!=6||ID!=7)
{     
        for(;;)
{
	    if(ID==1||ID==2||ID==3||ID==4||ID==5||ID==6||ID==7)
{ 
     	break ;
}
   printf("try again : ");
   scanf("%d",&ID);
}
}

    printf("please enter 1 operand or 2 operands : ");
    scanf("%d",&operand);

    if(ID==1||ID==2||ID==3||ID==4||ID==5)
{
        for(;;)
{
    if(operand==2)
{
   printf("enter num_1 : ");
   scanf("%d",&m);

   printf("enter num_2 : ");
   scanf("%d",&z);
        break ;
}
    else
{
   printf("try again : ");
   scanf("%d",&operand);
        continue ;
}
}
}

    else
{
        for(;;)
{
    if(operand==1)
{
   printf("enter the number : ");
   scanf("%d",&m);

        break ;
}
    else
{
   printf("try again : ");
   scanf("%d",&operand);
        continue ;
}
}
}

    if(ID==1)
{
   printf("the sum of numbers is : %d",add(m,z));
}
    else if(ID==2)
{
   printf("the subtraction of numbers is : %d",sub(m,z));
}
    else if(ID==3)
{
   printf("the mmultiply of numbers is : %d",multi(m,z));
}
    else if(ID==4)
{
   printf("the divid of numbers is : %d",divid(m,z));
}
    else if(ID==5)
{
   printf("the reminder of numbers is : %d",reminder(m,z));
}
    else if(ID==6)
{
   printf("the increment of the number is : %d",increment(m));
}
    else
{
   printf("the decrement of the number is : %d",decrement(m));
}

}

        int add(int x,int y)
{
    int sum ;

    sum= x+y ;

        return sum ;
}

        int sub(int x,int y)
{
    int sub ;

    sub= x-y ;

        return sub ;
}

        int multi(int x,int y)
{
    int multi;

    multi =x*y ;

        return multi ;
}

        int divid(int x,int y)
{
    int divi;
 
    divi= x/y ;

        return divi ;
}

        int reminder(int x,int y)
{
    int reminder;

    reminder= x%y ;

        return reminder ;
}

        int increment(int x)
{
    int increament;

    increament= ++x;

        return increament ;
}

    int decrement(int x)
{
    int decrement ;
	
        decrement= --x ;
		
        return decrement ;
}
