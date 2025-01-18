#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,t;
    double a,sum,jc;
    sum=0;
    i=1;
    while(i<=n)
    {
        for(t=1,jc=1;t<=i;t=t+1)
        {
            jc=jc*t;
        }
        a=1.0/jc;
        sum=a+sum;

        i=i+1;
    }
    printf("%.8lf",sum+1);
    return 0;
}
