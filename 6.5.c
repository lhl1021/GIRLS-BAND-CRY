#include <stdio.h>
#include <math.h>
int weishu(int x)
{
    int count=1;
    while(1)
    {
        if((x/10)!=0)
            count=count+1;
        x=x/10;
        if((x/10)==0)
            break;
    }
    return count;
}



int main ()
{
    int m,n,i;
    int found=0;
    scanf("%d %d",&m,&n);
    int count=0;
    for(i=m;i<=n;i=i+1)
    {
        int a=weishu(i);
        long b=pow(10,a);
        long I=i*i;

        if((I%b)==i)
        {
            if(found)
            {
                printf(" ");
            }
            else
            {
                found=1;
            }
            printf("%d",i);
            count=count+1;
        }

    }
    if(count==0)
        printf("No exist");

    return 0;
}
