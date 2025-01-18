#include<stdio.h>
int main ()
{
    int n,i,count;
    scanf("%d",&n);
    int a[n];
    if(n==1||n==2)
    {
        a[1]=1;
        a[0]=1;
        printf("%10d",a[0]);
        if(n==2)
            printf("%10d",a[1]);
    }
    else
    {
        a[0]=1;
        a[1]=1;
        printf("%10d",a[0]);
        printf("%10d",a[1]);
        for(i=2,count=3;i<n;i=i+1,count=count+1)
        {
            a[i]=a[i-1]+a[i-2];
            printf("%10d",a[i]);
            if(count%5==0)
                printf("\n");
        }
    }

    return 0;
}
