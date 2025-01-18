#include<stdio.h>
#include<string.h>
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
    int n,i,x,y,t;
    int lenb,lenc;
    x=0;
    y=0;
    scanf("%d",&n);
    int b[100];
    int c[100];
    for(i=0;i<n;i++)
        {
            scanf("%d",&t);
            if(t%2)  //ji
            {
                b[x]=t;
                x++;
            }
            else
            {
                c[y]=t;
                y++;
            }
        }

    paixu(b,x);
    paixu(c,y);

    if(x>=0)
    {
        printf("%d",b[0]);
        for(i=1;i<x;i++)
            printf(" %d",b[i]);
    }
    if(y>=0)
    {

        for(i=0;i<y;i++)
            printf(" %d",c[i]);
    }
    return 0;
}
