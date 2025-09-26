#include<stdio.h>
int main() {
     int a ;
     printf("put the value of a : ");
     scanf("%d", &a);
     
     switch (a){
        case 1:
           printf("the value of a is 1 \n");   // in switch case in c the all statements gets executed here 
        case 2:
           printf("the value of a is 2 \n");
        case 3:
           printf("the value of a is 3 ");      
     }
 return 0;
}