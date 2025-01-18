#include<stdio.h>
int Reverse(int n)
{
    int N=0;
    int i;
    for(i=1;i<=4;i++)
    {
        N=n%10+N*10;
        n=n/10;
    }
    return N;
}
int shushu(int N)
{
    int a[10]={0};
    int n=Reverse(N);
    int count=0,i;
    for(i=1;i<=4;i++)
    {
        a[n%10]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(a[i])
            count++;
    }
    return count;
}
int main ()
{
    int a,b,count;
    count=0;

    scanf("%d %d",&a,&b);
    while(1)
    {
        if(shushu(a)==b)
        {
            break;
        }
        else
        {
            a++;
            count++;
        }
    }
    printf("%d %04d",count,a);
    return 0;
}
