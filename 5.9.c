#include <stdio.h>
int main ()
{
    int m,n;
    int i,t;
    t=0;
    scanf("%d%d",&m,&n);
    for(i=m;i>=m&&i<=n;i=i+1)
    {


        if (i%3==2&&i%5==3&&i%7==4)
        {
            if(t>0)
            {
                printf(" ");
            }
            printf("%d",i);
            t=t+1;

        }


    }
    if(t==0)
        printf("total=%d",t);
    if(t>0)
        printf("\ntotal=%d",t);
    return 0;
}
