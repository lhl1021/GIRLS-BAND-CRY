#include <stdio.h>
long long yue(long long x,long long y)
{
    long long n,i,N,k;
    n=x;
    if(n<y)
        n=y;
    k=0;
    for(i=1;i<=n;i=i+1)
    {
        if(x%i==0&&y%i==0)
        {
            k=i;
        }
    }
    return k;
}
