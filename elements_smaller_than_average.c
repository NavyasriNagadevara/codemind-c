#include<stdio.h>
int main()
{
    int arr[100],n,i,avg,count=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
  
    for(i=0;i<n;i++)
    {
        if(avg>=arr[i])
        {
          
            count++;
        }
    }
    printf("%d",count);
}