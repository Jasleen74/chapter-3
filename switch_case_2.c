#include<stdio.h>
int main() {
        int a ;
     printf("put the value of a : ");
     scanf("%d", &a);
    
    switch (a){
        case 1:
           printf("the value of a is 1 \n");   
           break; 
                                  // we are using break here cuz we want to print only one case.
        case 2:                  // we are basically saying it to check the correct one and ignore the others
           printf("the value of a is 2 \n");
           break;               // cuz here basically all ther cases must get executed too a by default
                               // but here we added BREAK;  so it breaks the code 
        case 3:               // so when the value matches it straight goes....
           printf("the value of a is 3 "); 
    }                        // here where our SWITCH-CASE ends .....                    
  
 return 0;
}                          // this all happens cuz C is an early language 