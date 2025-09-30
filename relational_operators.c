#include<stdio.h>
int main() {
     int age ;

     printf("what is ur age : ");
     scanf("%d",&age);


     if (age==20)    
   //   == is used to check equality
     { 
        printf("u are not too old \n");
    
    };

     if (age >= 30)
   //   >= is used for greter than or equal to
     {
        printf("you should be carefull of ur age \n");
     };


     if (age>40)
   //   age is greater than something
     {
        printf("u are growing old \n");
     };


     if (age<50)
   //   age lesser than something
     {
        printf("good u can enjoy ur life \n");
     };


     if (age <= 60)
   //   <= lesser than or equal to 
     {
        printf("oo damn u are old\n");
     };
     

     if (age != 230)
   //    != is used for not equal to
     {
        printf("damn bro dont live too long\n");
     }

     else {
        printf("age is just a number \n");
     };


  
 return 0;
}