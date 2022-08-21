#include<stdio.h>

void main(void){
int x ;

printf("please enter your ID\n");
scanf("%d",& x);

switch(x){

case 1234 : 
printf("welcome ahmed");

break ;

case 5678 :
printf("welcome yousef");

break ;

case 1145 :
printf("welcome mina");

break ;

default :
printf("wrong ID\n");

}


}