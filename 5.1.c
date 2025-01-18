#include <stdio.h>
int main()
{
    int n,i,max,x;
    scanf("%d",&n);
    i=1;
    max=0;

    while(i<=n)
    {
        scanf("%d",&x);
        if(max<x)
            max=x;
        i=i+1;
    }
    printf("%d",max);

    return 0;
}
