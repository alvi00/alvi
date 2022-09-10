#include<stdio.h>
void print_small(int a,int b);
int main()
{
  int a,b;
  printf("enter the number \n");
  scanf("%d %d",&a,&b);
  print_small(a,b);
  return 0;
}
void print_small(int a,int b)
{
  if(a>b)
  {
    printf("%d is small",b);
  }
  else if (a<b)
  {
    printf("%d is small",a);
  }
  else if(a==b)
  {
    printf("both are equal");
  }
  else
  {
    printf("invalid number");
  }
}