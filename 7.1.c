#include<stdio.h>
int main ()
{
    int n,i,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&a[i]);
    }
    for(count=0,i=n-1;i>=0;i=i-1)
    {
        if(count!=0)
            printf(" ");
        printf("%d",a[i]);
        count=1;
    }
    return 0;
}
