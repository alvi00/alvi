#include<stdio.h>
int main()
{   
    int num,i,n1,n2,n3;
    printf("enter the number \n");
    scanf("%d",&num);
    n1=0;
    n2=1;
    printf("%d \n",n1);
    printf("%d \n",n2);
    for(i=2;i<num;i++)
    {
        n3=n1+n2;
        printf("%d \n",n3);
        n1=n2;
        n2=n3;
        
    }
    
    return 0;
}