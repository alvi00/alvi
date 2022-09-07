#include <stdio.h>
#include <conio.h>
int main () {
  int number_1,number_2;
  char ch;
    printf("enter the numbers  : \n");
    scanf("%d %d",&number_1,&number_2);
    scanf("%c",&ch);
  if (number_1<number_2)
  {
    printf("smallest number is %d",number_1);
  }
  else if (number_1>number_2)
  {
    printf("smallest number is %d",number_2);
  }
  else if (ch>='a' && ch<='z')
  {
    printf("invalid ");
  }
  else if (ch>='A' && ch<='Z')
  {
    printf("invalid");
  }
   else if (ch>='A' && ch<='Z')
  {
    printf("invalid");
  } else if (ch>='A' && ch<='Z')
  {
    printf("invalid");
  }
  
else{
  printf("invalid");
}
  return 0;
}