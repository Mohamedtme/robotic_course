
#include <stdio.h>

void main(void){

int x,y,z,max ;

printf("enter num 1\n");
scanf("%d",& x);

printf("enter num 2\n");
scanf("%d",& y);

printf("enter num 3\n");
scanf("%d",& z);

if(x>y){
max=x;
}
else{
max=y;
}
if(max>z){
printf("maximum num is %d", max);
}
else{
printf("maximum num is %d", z);
}


}