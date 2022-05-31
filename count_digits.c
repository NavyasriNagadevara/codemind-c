#include<stdio.h>
int main()
{
    int i,n,c=0,arr[100],temp,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        temp=arr[i];
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            c++;
        }
        if(temp==0)
        {
            c++;
        }
        printf("%d ",c);
    }
}