#include<stdio.h>
#define N 110

int main ()
{
    int a[N],b[N];
    int i,n,count=0;
    double pin;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
            count++;
    }
    printf("%.2lf%%",count*100.0/n);

    return 0;
}
