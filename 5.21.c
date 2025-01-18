#include<stdio.h>
int main()
{
    int i,n,x;
    scanf("%d",&n);
    i=n-1;
    x=1;
    while(i>=1)
    {
        x=(x+1)*2;
        i=i-1;
    }
    printf("%d",x);
    return 0;
}
