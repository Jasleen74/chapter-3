#include<stdio.h>
int main() {
     
     int a ,b ;
    
     printf("pls put the value of a either 0 or 1  :  ");
     scanf("%d", &a);

     printf("pls put the value of b  either 0 or 1 :  ");
     scanf("%d",&b);


 if (a&&b){
     printf("this is for the value of a and b  \n ", a&&b);
     
 }

 if  (a || b ){
    printf("this is for the value of a or b  \n ", a||b);
     
 }
 return 0;
}