#include<stdio.h>
int main()
{
  int a,b,sum,x;
  float percentage,percentage1;
  printf("enter the buying price \n");
  scanf("%d",&a);
  printf("enter the selling price \n");
  scanf("%d",&b);
  printf("\n");
  printf("\n");
  printf("\n");
  printf("your buying price is =%d \n",a);
  printf("your selling price is =%d \n",b);
  sum=b-a;
  x=a-b;
  percentage=(sum*100)/a;
  percentage1=(x*100)/b;

  if(sum>0)
  {
    printf("you have done profit \n");
    printf("your profit is =%d \n",sum);
    printf("your profit is =%f percentage\n",percentage);

  }
  else if(sum<=0)
  {
    printf("you have done loss \n");
    printf("your loss is =%d \n",sum);
    printf("your loss is =%f percentage",percentage1);
  }

  else
  {
    printf("enter correct number");
  }



  
  return 0;
}