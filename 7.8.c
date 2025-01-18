#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum,ave,max,min,count;
    sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    ave=sum/n;
    max=a[0];
    min=a[0];
    count=0;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        if(a[i]>ave)
            count=count+1;
    }
    printf("%d",max);
    printf(" %d",min);
    printf(" %d",count);
    return 0;
}
