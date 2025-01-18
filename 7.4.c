#include<stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%d",a[0]);
    for(i=1;i<n;i++)
        printf(" %d",a[i]);
    return 0;
}
