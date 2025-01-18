#include<stdio.h>
int su(int x)
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
    int n;
    scanf("%d",&n);
    double i=2;
    int found=0;
    while(i<=n)
    {
        if(su(pow(2,i)-1))
            {
                printf("%.0lf\n",pow(2,i)-1);
                found++;
            }
        i++;
    }
    if(found==0)
    {
        printf("None");
    }
    return 0;
}
