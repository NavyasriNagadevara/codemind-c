#include<stdio.h>
int main()
{
    int arr[100],i,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}