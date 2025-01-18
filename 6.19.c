#include<stdio.h>
int main ()
{
    int i,j,m,n;
    scanf("%d %d",&m,&n);
    int sum;
    int found=0;
    for(i=m;i<=n;i++)
    {
        sum=0;
        for(j=1;j<=i/2+1;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            printf("%d = 1",i);
            for(j=2;j<=i/2+1;j++)
            {
                if(i%j==0)
                {
                    printf(" + %d",j);
                }
            }
            printf("\n");
            found++;
        }


    }
    if(found==0)
    {
        printf("None");
    }

    return 0;
}
