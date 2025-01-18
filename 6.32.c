#include<stdio.h>
int run(int n)
{
    if(n%4==0&&n%100!=0||n%400==0)
        return 1;
    return 0;
}

int main ()
{
    int n,count,i;
    count=0;
    scanf("%d",&n);
    for(i=2000;i<=n;i=i+4)
    {
        if(run(i)&&i!=2000)
            {
                printf("%d\n",i);
                count++;
            }
    }
    if(n<=2000)
        {
            printf("Invalid year!");
            return 0;
        }
    if(count==0)
        printf("None");
    return 0;
}
