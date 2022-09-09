#include<stdio.h>
void print_table(int n);
int main()
{ int n;
  printf("enter the number \n");
  scanf("%d",&n);
  print_table(n);
}
void print_table(int n)
{
  for(int i=1;i<=10;i++)
  {
    printf("%d \n",n*i);
  }
}

