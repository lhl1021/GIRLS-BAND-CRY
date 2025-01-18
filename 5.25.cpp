#include <stdio.h>
int main ()
{
    int t,a,sum;
    sum=0;
    scanf("%d",&a);
    printf("%d=",a);
    for(t=2;t<=a;)
    {

        if(a%t==0)
        {
            sum=sum+1;

            if(sum==1)
            {
               printf("%d",t);
            }
            else
            {
                printf("*%d",t);

            }
            a=a/t;
            t=2;
        }
        else
            t=t+1;




    }
    return 0;
}
