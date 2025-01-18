#include<stdio.h>
void swap (int *a,int *b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}

void paixu (int a[],int n)
{
    int j,i,max;
    for(i=0;i<n;i++)
    {
        max=0;
        for(j=0;j<n-i;j++)
        {
            if(a[max]<a[j])
                max=j;
        }
        swap(&a[max],&a[n-i-1]);
    }
}

int main ()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    paixu(a,n);
    printf("%d",a[0]);
    for(i=1;i<n;i++)
        printf(" %d",a[i]);
    return 0;
}
