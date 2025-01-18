#include<stdio.h>
#define N 110

void paixu (int a[],int n)
{
    int i,t;
    t=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=t;
}
int main ()
{
    int n,m,i;
    int a[N];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=m;i++)
        paixu(a,n);


    printf("%d",a[0]);
    for(i=1;i<n;i++)
        printf(" %d",a[i]);


    return 0;
}
