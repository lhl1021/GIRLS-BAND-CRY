#include<stdio.h>
#define N 30
int main()
{
    int a[N];
    int i,n;
    n=0;
    for(i=0;i<24;i++)
    {
        scanf("%d",&a[i]);
    }
    while(1)
    {
        scanf("%d",&n);

        if(n<0||n>23) break;

        printf("%d",a[n]);

        if(a[n]>50)
            printf(" Yes\n");
        else
            printf(" No\n");
    }
    return 0;
}
