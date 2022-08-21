
#include<stdio.h>

void main()
{

int x=1234 ;
int y=5678 ;
int z=9870 ;                            /* the IDs        */
int a=7788 ;
int s=5566 ;
int d=1122 ;                           /* the passwords  */
int id,pass ;

printf("please enter your ID :  ");
scanf("%d",& id);

	if(id==x||id==y||id==z)
{
        printf("please enter your password : ");
        scanf("%d",& pass);	


    if(id==x&&pass==a)
{
	    printf("welcome ahmed");
}
	
	else if(id==y&&pass==s)
{
	    printf("welcome amr");
}		
    else if(id==z&&pass==d)
{
		printf("welcome wael");	
}

	else if(pass!=a||pass!=s||pass!=d)
{
		printf("try again : ");
		scanf("%d",& pass);
		                
    for(int m=3;m<=3;m++)
{
	if(pass!=a||pass!=s||pass!=d)
	{
		printf("try again : ");
		scanf("%d",& pass);
		             
	}

    if(id==x&&pass==a)
{
	    printf("welcome ahmed\n");
		        break ;
}
	
	if(id==y&&pass==s)
{
	    printf("welcome amr\n");
		        break ;
}		
    if(id==z&&pass==d)
{
		printf("welcome wael\n");
                break ;		
}
	if(m==3)
{
		printf("incorrect password for 3 times, no more try\n"); 
		        break ;
}
}
}
}
	
	else if(id!=x||id!=y||id!=z)
{
	printf("you are not registered");

}


}


