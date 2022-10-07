#include<stdio.h>
int main()
{
    int arr[50],brr[100],h=0,k=0,i,j;
    for(i=1;i<=3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;j<=3;j++)
    {
        scanf("%d",&brr[j]);
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i==j)
            {
                if(arr[i]>brr[j])
                {
                    h++;
                }
                else if(arr[i]<brr[j])
                {
                    k++;
                }
            }
        }
    }
printf("%d %d",h,k);
}