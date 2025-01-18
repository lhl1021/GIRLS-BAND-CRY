#include <stdio.h>
int main ()
{
    double pi,Pi;
    int n,i;
    scanf("%d",&n);

    if(n==1)
    {
        pi=1.0-1.0/3;
    }
    if(n>1)
    {
        for(i=2,pi=1.0-1.0/3;i<=n;i=i+1)
       {

        pi=pi+1.0/(4*i-3)-1.0/(4*i-1);
       }
    }


    Pi=4*pi;
    printf("%lf",Pi);
    return 0;
}
