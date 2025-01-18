#include<stdio.h>
int main ()
{
    int a,b,t,i,n;
    a=1;
    b=1;
    scanf("%d",&n);
    if(n==1)
    {
        printf("%10d",a);
    }

    if(n==2)
    {
        printf("%10d",a);
        printf("%10d",b);
    }

    if(n>2)
    {
        printf("%10d",a);
        printf("%10d",b);
        for(i=3;i<=n;i=i+1)
       {
        t=a+b;
        a=b;
        b=t;
        printf("%10d",t);
        if(i%5==0)
        {
            printf("\n");
        }
        }
    }
    return 0;
}
