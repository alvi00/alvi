#include<stdio.h>
#include<math.h>
int main()
{
  int x,n,sum1;
  printf("Enter the number\n");
  scanf("%d %d",&x,&n);  
  int sum=1;sum1=0;
  for(int i=n;i>=1;i--)
  {
    sum=sum*i;
  }
  for(int i=1;i<=n;i++)
  {
    sum1=sum1+1+pow(x,i)/sum;
  }
     printf("%d",sum1);
return 0;
}