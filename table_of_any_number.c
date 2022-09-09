#include <stdio.h>
int main()
{
  int num,i,table;
  printf("enter the number \n");
  scanf("%d",&num);
  for(i=1;i<=10;i=i+1)
  {
    table=num*i;
    printf("%d * %d = %d\n",num,i,table);
  }
  return 0;
}