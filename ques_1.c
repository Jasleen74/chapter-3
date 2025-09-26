// What will be the output of this program
/*int a = 10;
if (a = 11)
printf("I am 11");
else
printf("I am not 11");*/


#include<stdio.h>
int main() {
     int a = 10;
     if (a = 11){                    // this is an example of conversion in value
                                    // it picks up the value which is stated after 
      printf("I am 11");   
        
     }
                                     // In C, an assignment operation itself returns the value that was assigned
    else{                            // The single equals sign (=) is the assignment operator. 
        printf("I am not 11");       // It assigns the value on the right (11) to the variable on the left (a). So, a is now updated to 11.
    }
  
 return 0;
}