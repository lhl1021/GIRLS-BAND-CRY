#include<stdio.h>
#include<math.h>
#define N 20
int su (int x)
{
    int i;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main ()
{
    int n,k,i,j,count,sum;
    sum=0;
    count=0;
    j=0;
    int a[N]={0};
    scanf("%d %d",&n,&k);
    for(i=n;k>0;i--)
    {
        if(i<2)
            break;
        if(su(i))
            {
                a[j]=i;
                j++;
                k--;
            }


    }
    for(i=0;i<j;i++)
    {
        if(count)
            printf("+");
        printf("%d",a[i]);
        sum=sum+a[i];
        count++;
    }
    printf("=%d",sum);
    return 0;
}
