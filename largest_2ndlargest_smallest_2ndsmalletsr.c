#include<stdio.h>
int main()
{
    int n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=0;
    int _max=0;
    int lowest;
    int _lowest;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>_max && arr[i]<max)
        {
            _max=arr[i];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(i==0 || lowest>arr[i])
        {
            lowest=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i==0 ||_lowest>arr[i])
        {
           if(arr[i]!=lowest)
           {
                _lowest=arr[i];
            }
        }
    }
    
    
    

 printf("%d is the highest number\n",max);
 printf("%d is the second highest number\n",_max);
 printf("%d is the lowest number\n",lowest);
 printf("%d is the second lowest number\n",_lowest);

    return 0;
}