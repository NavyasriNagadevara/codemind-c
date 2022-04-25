#include<stdio.h>
int main()
{
    int n,d,res=0;
    scanf("%d%d",&n,&d);
    while(n)
    {
        d=n%10;
        n=n/10;
        res+=d*d;
        if(n==0&&res>9)
        {
            n=res;
            res=0;
        }
    }
    if(res==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}