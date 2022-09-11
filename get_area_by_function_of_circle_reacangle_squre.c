
#include<stdio.h>
void area_squre(int s,float answer);
void area_circle(int c,float answer);
void area_rectangle(int r,int x,float answer);
int main()
{
  int a,s,c,r,x;
  float answer;
  printf("of which u wanna get area if squre press 5,if circle press 10,if rectangle press 15 \n");
  scanf("%d",&a);
  if(a==5)
  {
    printf("enter the value of line \n");
    scanf("%d",&s);
    area_squre(s,answer);
  }
  if(a==10)
  {
    printf("enter the value of line \n");
    scanf("%d",&c);
    area_circle(c,answer);
  }
  if(a==15)
  {
     printf("enter the value of 1st line line \n");
    scanf(" %d",&r);
     printf("enter the value of 1st line line \n");
    scanf(" %d",&x);

    area_rectangle(r,x,answer);
  }
  else 
  {
    printf("invalid");
  }
  return 0;

}
void area_squre(int s,float answer)
{
  answer=s*s;
  printf("%f",answer);
}
void area_circle(int c,float answer )
{
  answer=3.1416*c*c;
  printf("%f",answer);
}
void area_rectangle(int r,int x,float answer)
{
  answer=0.5*r*x;
  printf("%f",answer);
}