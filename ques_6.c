#include<stdio.h>
int main() {
     int a ,b , c, d;
     printf("put the value of a : ");
     scanf("%d", &a);

     printf("put the value of b : ");
     scanf("%d", &b);

     printf("put the value of c : ");
     scanf("%d", &c);

     printf("put the value of d : ");
     scanf("%d", &d);


     if (a>b && a>c && a>d){
        printf(" a is greater than b , c and d");
     }

     else if (b>a && b>c && b>d){
        printf(" b is greater than a , c and d");
     }

     else if (c>b && c>a && c>d){
        printf(" c is greater than a , b and d");
     }

     else if (d>b && d>c && d>a){
        printf(" d is greater than a , b and c");
     }
    
    else if (a ==b==c==d){

        printf("All the values u entered are same");
    }


  
 return 0;
}