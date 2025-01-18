#include <stdio.h>
int main()
{
    double s,h,a;
    s=100.0;
    h=50.0;
    int n;
    scanf("%d",&n);
    if(n==1)
    {
       printf("%lf",s);
       printf(" ");
       printf("%lf",h);
    }
    if(n>1)
    {
        int i;
        double a;
        for(i=2,a=50.0;i<=n;i=i+1)
        {
            s=s+2*a;
            h=a/2;
            a=a/2;
        }
        printf("%lf",s);
        printf(" ");
        printf("%lf",h);
    }

    return 0;
}
