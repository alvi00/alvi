#include <stdio.h>
#include <math.h>
int main() {
 int number_1;
 printf("please enter the given number ");
 scanf("%d",&number_1);
 if (number_1>=80 && number_1<=100)
 {
  printf("you got A+ \n");
 }
 else if (number_1>=70 && number_1<80)
 {
  printf("you got A \n");
 }
  else if (number_1>=60 && number_1<70)
  {
    printf("you got a A- \n");
  }
    else if (number_1>=50 && number_1<60)
  {
    printf("you got a B \n");
  }  
    else if (number_1>=40 && number_1<50)
  {
    printf("you got a C\n");
  }
    else if (number_1>=33 && number_1<40)
  {
    printf("you got a D\n");
  }
    else if (number_1>=0 && number_1<33)
  {
    printf("you got a F\n");
  }
  else {
    printf("given number is invalid \n");
  }
  printf("thanks for checking your grade from our website \n");

   return 0;
   
}
