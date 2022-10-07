
#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]<arr[1])
    {
        for(i=0;i<n;i++)
        {
            if(i%2==1 && i<n)
            {
                if(arr[i-1]>arr[i])
                {
                    x+=1;
                    break;
                }
            }
        }
        if(x==0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    if(arr[0]>arr[1])
    {
        for(i=0;i<n;i++)
        {
            if(i%2==1 && i<n)
            {
                if(arr[i-1]<arr[i])
                {
                    x+=1;
                    break;
                }
            }
        }
        if(x==0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    return 0;
}