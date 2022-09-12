#include<stdio.h>

int main()
{
  int n,sum,i;
  printf("give the number \n");
  scanf("%d",&n);
  sum=0;
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  printf("sum of first natural number is\n%d ",sum);
  return 0;
}