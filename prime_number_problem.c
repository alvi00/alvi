#include <stdio.h>

int main() 
{ 
  int i,num,prime;
  prime=1;
  printf("enter the number");
  scanf("%d",&num);

 for(i=2;i<num;i++)
 {
  if(num%i==0)
  {
    prime=0;
  }
 }
  if(prime==1)
  {
    printf("this is prime number");
  }
  else{
    printf("this is not a prime number");
  }
 
   return 0;
}
