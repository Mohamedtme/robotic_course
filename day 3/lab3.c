#include<stdio.h>

void main(void){

int x ;
printf("please enter num\n");

scanf("%d",& x);

if(x>=0 && x<50){
printf("your rating is failed");
}

else if (x>=50 && x<65){
printf("your rating is normal");
}
 
else if (x>=65 && x<75){
printf("your rating is good");
}

else if (x>=75 && x<85){
printf("your rating is very good");
}
else {
printf("your rating is excellent");
}


}