#include<stdio.h>
int main()
{
    int n,m,arr[100],i,j,sum=0,diff=0,k;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        sum=0;
        scanf("%d",&n);
        k=n*(n+1)/2;
       // printf("%d",k);
        for(j=0;j<n-1;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(j=0;j<n-1;j++)
        {
            sum=sum+arr[j];
        }
        diff=k-sum;
        printf("%d
",diff);
    }
}