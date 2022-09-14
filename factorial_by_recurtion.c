#include<stdio.h>
int factorial(int n);
int main()
{
  int n;
  printf("enter the number \n");
  scanf("%d",&n);
  printf("%d",factorial(n));
  return 0;
}
int factorial(int n)
{
  if(n==1)
  {
    return 1;
  }
  int fa1=factorial(n-1);
  int fa2=fa1*n;
  return fa2;
}
