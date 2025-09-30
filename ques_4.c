#include<stdio.h>
int main() {
     

     int year;

     printf("put  the year : ");
     scanf("%d",& year);

     if ( (year%4)== 0) {
        printf("it is a leap year");

    
     }
     else {
        printf("It is not a leap year");
     }


  
 return 0;
}