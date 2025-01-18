#include<stdio.h>
int shuhe(int n)
{
    int sum=0;
    while(n)
    {
        sum=n%10+sum;
        n=n/10;
    }
    return sum;
}


int main ()
{
    int n,count,i;
    count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(shuhe(i)==15)
        {
            printf("%6d",i);
            count++;
            if(count%8==0)
                printf("\n");

        }
    }
    if(count==0)
        printf("None");
    return 0;
}
