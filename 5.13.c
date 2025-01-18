#include <stdio.h>
int main ()
{
    int n,a;
    long jc;
    scanf("%d",&n);
    a=1;
    jc=1;
    do
    {
        jc*=a;
        a=a+1;
    }while(a<=n);
    printf("%d!=%ld\n",n,jc);
    return 0;
}
