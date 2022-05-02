#include<stdio.h>
int main()
{
    int n,arr[100],i,max=0,count=0,A,B;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&A,&B);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<A || arr[i]>B )
        {
            if(max==arr[i])
            {
                printf("%d",max);
            }
        }
        else if(arr[i]>=A&& arr[i]<=B)
        {
            if(arr[i]==max)
            {
                count++;
            }
        }
    }
    if(count>=1)
    {
        printf("-1");
    }
    return 0;
}