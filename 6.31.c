#include<stdio.h>
long long hui(long long n)
{
    int i;
    char str[100];
    sprintf(str,"%lld",n);
    int len=strlen(str);
    for(i=0;i<(len/2);i++)
    {
        if(str[i]!=str[len-1-i])
            return 0;
    }
    return 1;
}
long long nixu(long long n)
{
    long long N=0;
    while(n/10)
    {
        N=n%10+N;
        N=N*10;
        n=n/10;
    }
    N=N+n;
    return N;
}
int main ()
{
    long long n;
    int count=0;
    scanf("%lld",&n);
    printf("%lld",n);
    while(!hui(n))
    {
        n=n+nixu(n);
        printf("--->%lld",n);
        count++;
    }
    printf("\n%d",count);

    return 0;
}
