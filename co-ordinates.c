#include<stdio.h>
int main()
{
    int x,y;
    x=0;y=0;
    char a;
    int d;
    for(int i=1;;)
     {
        printf("Please input the direction as N,S,E,W (0 to exit):");
        scanf("%c",&a);
        fflush(stdin);
        if(a=='0')
        {
          break;
        }
        if(a=='N'|| a=='S'||a=='E'||a=='W')
        {

        printf("Please input the mile in %c direction:",a);
        scanf("%d",&d);
        fflush(stdin);
        }
        else
        {
            printf("Invalid input\n");
            continue;
        }
        if(a=='E')
        {
            x=x+d;
        }
        if(a=='N')
        {
            y=y+d;
        }
        if(a=='W')
        {
            x=x-d;
        }if(a=='S')
        {
            y=y-d;
        }
            
        
     }
     printf("\nCurrent position of A: (%d,%d)\n",x,y); 
    return 0;
}
