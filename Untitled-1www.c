#include<stdio.h>
int main()
{  
   int x,y;
   char a,b;
   printf("Enter a small character \n");
   scanf("%c",&a);
   if(a>=97 && a<=122)
   {
    
        b=a-32;
        printf("%c\n",b);
        printf("%d\n",a);
        for(x=a;x>0;x=x/2)
        {
        y=x%2;
        printf("%d",y);
        }
        
        

   } 
   else
   {
    printf("Invalid input \n");
   }
    return 0;
}