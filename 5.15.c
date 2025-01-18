#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    double a,b;
    i=1;
    b=0;
    while(i<=n)
    {
        a=pow(-1,i+1)/(3*i-2);
        a=a+b;
        b=a;
        i=i+1;
    }
    printf("%.4lf",a);
    return 0;
}
