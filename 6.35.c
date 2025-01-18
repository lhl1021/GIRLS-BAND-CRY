#include<stdio.h>
int main ()
{
    int i,j,n,k;
    scanf("%d",&n);
    int a[32][32]={0};
    for(i=0;i<32;i++,j++)
    {
        a[i][0]=0;
        a[i][i]=0;
    }
    for(i=2;i<32;i++)
    {
        for(j=1;j<i;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(k=n-1;k>0;k--)
        {
            printf("          ");
        }

        for(j=0;j<=i;j++)
        {
            printf("%10d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
