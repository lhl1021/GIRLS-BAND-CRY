#include <stdio.h>
int main()
{
    int m,n,i;
    scanf("%d %d",&m,&n);
    i=m;
    double S;
    double t=0;
    while(i<=n)
    {
        S=i*i+1.0/i;
        S=S+t;
        t=S;
        i=i+1;
    }
    printf("%.6lf",S);

    return 0;
}
