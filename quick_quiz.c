#include<stdio.h>
int main() {
    char grade;
    int marks; 
    printf("Put the value of the marks of the student :  ");
    scanf("%d",& marks);

    if (marks <= 100 && marks>90){
        grade = 'A';
        printf ("The grade of the student is %c",grade);
    } 

    else if (marks<=90 && marks>=80){
        grade = 'B';
        printf ("The grade of the student is %c",grade);
    }


    else if (marks<=80 && marks>=70){
        grade = 'C';
        printf ("The grade of the student is %c",grade);
        
    }

    else if (marks<=70 && marks>=60){
        grade = 'D';
        printf ("The grade of the student is %c",grade);
    }

    else if (marks<=60 && marks>=50){
        grade = 'E';
        printf ("The grade of the student is %c",grade);
    }

     else if (marks<50)
        grade = 'F';
        printf("The grade of the student is %c", grade);

    



    
    
        

  
 return 0;
}