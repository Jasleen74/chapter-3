#include<stdio.h>
int main() {
     

    if (7) {

        printf("this  integer is a true value \n");  // executable
    }

   if (1.7){
        printf ("this  float is also a true value \n"); // executable
    }
    
    if ('a'){
        printf("this character is also a true value \n"); // executable
    }
    
    if (0){
        printf("this will not get executed cuz its a zero value");  //  non-executable
    }

         // the avlue in if acn be anything for example it can be an intger(eg - 12)
        // or it can be a float( eg - 2.3)
        // or it can also be a charcater (eg - 'a')
   
 

       
 return 0;
}