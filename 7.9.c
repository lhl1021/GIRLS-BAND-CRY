#include<stdio.h>
int su(int n)
{
    int found,i;
    found=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            found++;
    }
    return found;
}
int main ()
{
    int n,i,N,j;
    scanf("%d",&N);
    n=N+1;
    int a[n];
    a[0]=1;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        if(su(i)==2)
        {
            a[i]=0;
            for(j=i*i;j<n;j=j+i)
                a[j]=1;
        }

    }
    int count;
    count=0;
    for(i=2;i<n;i++)
    {

        if(a[i]==0)
            {
                if(count==1)
                    {
                        printf(" ");
                    }
                printf("%d",i);
                count=1;
            }
    }

    return 0;
}
