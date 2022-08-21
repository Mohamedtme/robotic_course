#include<stdio.h>


void main(void){

int x ; 
int sala ;

printf("please enter your working our :\n");
scanf("%d",& x);
if(x>=40){
sala=x*50 ;
}
if(x<40){
sala=(x*50) ;
sala=sala-(sala*.1);
}
printf("the salary is : %d", sala);



}


