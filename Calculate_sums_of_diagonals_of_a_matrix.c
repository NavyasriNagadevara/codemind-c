#include<stdio.h>
int main()
{
    int arr[100][100],i,j,n,m,sums=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sums=sums+arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n-j-1)
            {
                k=k+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",sums);
    printf("Secondary Diagonal:%d
",k);
    
}