#include<stdio.h>
#include<string.h>
#define N 1000
int main ()
{
    int n,k,i,j,found;
    found=0;
    scanf("%d %d",&n,&k);
    int a[N];
    for(i=0;i<=n;i++)
        a[i]=1;


    for(i=2;i<=k;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(j%i==0)
                a[j]++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if((a[i]%2)==1)
        {
            if(found)
                printf(" ");
            printf("%d",i);
            found++;
        }
    }

    return 0;
}
