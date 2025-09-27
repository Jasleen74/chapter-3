#include<stdio.h>
int main() {
     

    float income,tax;

    printf("put the amoutn of the income in L : ");
    scanf("%f", &income);

    if (income <=250000){
        tax = 0;
        printf("You dont have to pay the tax");
    }


    else if  (income <500000 && income>250000){
        printf("the tax on ur income is of 5 percent \n");
        tax = 0.05 * (income - 250000);
        printf("ur total tax is : %.2f ",tax );
    }

    else if (income > 500000 && income >= 1000000){
        printf("the tax on ur income is of 20 percent \n");
        tax = (0.5 * (500000-250000)) + (0.2 * (income- 500000));
        printf("ur total tax is : %.2f ",tax );
    }

    else {
        printf("the tax on ur income is of 30 percent \n");
        tax = (0.5 * (500000-250000)) + (0.2 * (income- 500000))+ (0.3 * (income - 1000000));
        printf("ur total tax is : %.2f ",tax );
    }
  
    
 return 0;
}