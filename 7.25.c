#include<stdio.h>
#define N 1100
int main ()
{
    int n,k,i,max,max_num;
    max=0;
    max_num=0;
    int a[N],sum[N];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        a[n+i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        sum[i]=a[i]+a[i+1]+a[i+2]+a[i+3];
    }
    for(i=0;i<n;i++)
    {
        if(max<sum[i])
        {
            max=sum[i];
            max_num=i;
        }
    }
    printf("%d %d",max,max_num+1);

    return 0;
}
