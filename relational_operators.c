#include<stdio.h>
int main() {
     int age ;

     printf("what is ur age : ");
     scanf("%d",&age);


     if (age==20)
     { 
        printf("u are not too old \n");
    
    };

     if (age >= 30)
     {
        printf("you should be carefull of ur age \n");
     };


     if (age>40)
     {
        printf("u are growing old \n");
     };


     if (age<50)
     {
        printf("good u can enjoy ur life \n");
     };


     if (age <= 60)
     {
        printf("oo damn u are old\n");
     };
     

     if (age != 230)
     {
        printf("damn bro dont live too long\n");
     }

     else {
        printf("age is just a number \n");
     };


  
 return 0;
}