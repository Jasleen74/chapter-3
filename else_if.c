#include<stdio.h>
int main() {
     
    int age;
    printf("what is ur age : ");
    scanf("%d",&age);

    if (age < 18)                          // these go one by one on the ladder 
    {
        printf("You are not   an adult");         // only one block is followed 
    }                                        //if  IF is followed then other's are not folowed
                                             // and so on
     else if ( 50< age <100 )                    // this is called (if) - (else if) - (else) ladder
    {   
    printf  ("you are at the most productive age ");
    }
    
    else {                                   // this else is optional
        printf(" Age dosent matter");    
    }
    
 return 0;
}