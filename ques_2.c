#include<stdio.h>
int main() {

    int maths, physics, chemistry,total ;

    total = (maths + physics + chemistry);

    printf("Put the marks of maths : ");
    scanf("%d",&maths);

    printf("Put the marks of physics : ");
    scanf("%d",&physics);

    printf("Put the marks of chemistry : ");
    scanf("%d",&chemistry);

    printf("the marks are %d , %d and %d  \n", maths,physics,chemistry );


  if (maths<33 || physics<33  || chemistry<33){
    printf("ur marks are very less \n");
  }

  else if ((total/3)<40){
  printf("Ur marks are less u are fail ");
  }

  else if (printf("u are pass "))


  
    

  

 
 return 0;
}