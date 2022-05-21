#include<stdio.h>
int main()
{
    int arr[100],n,i,j,temp,s=0,c=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            s=s+d;
        }
    }
    printf("%d",s);
    return 0;
}