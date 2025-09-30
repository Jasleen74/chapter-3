#include<stdio.h>
int main() {
    char ch ;
    printf("Enter ur chracter : ");
    scanf("%c",&ch);


    printf("The character is %c\n",ch);
    printf("The ascii value of the chracter  is %d \n",ch);

    // here the %d gives the ascii value of the character
    // ascii vlaue is specific code assigned to the chrcater etc etc


    if (ch >= 65 && ch<= 90){
        printf("The letter is an upper case ");
    }

    else if (ch >= 97 && ch <= 122){
        printf("The letter is a lower case ");

    }

    else{
       printf("THE VALUE U ENTERED IS NOT AN ALPHABET :-(");

    }

    

     

  
 return 0;
}