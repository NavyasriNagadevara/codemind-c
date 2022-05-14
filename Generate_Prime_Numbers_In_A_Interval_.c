#include<stdio.h>
int main()
{
    int n,i,j,c=0,r;
    scanf("%d",&n);
    scanf("%d",&r);
    for(i=n;i<=r;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        //printf("%d",c);
        if(c==2)
        {
            printf("%d
",i);
        }
    }
}