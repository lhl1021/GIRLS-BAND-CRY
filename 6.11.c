#include<stdio.h>
int main()
{
    int m,n,i,j;
    double sum_m,sum_n,sum;
    sum_m=1;
    sum_n=1;
    scanf("%d %d",&m,&n);
    for(i=n,j=1;i>n-m;i--,j++)
    {
        sum_m=i*sum_m;
        sum_n=sum_n*j;
    }
    sum=sum_m/sum_n;
    printf("%.0lf",sum);
    return 0;
}
