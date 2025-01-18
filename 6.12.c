#include<stdio.h>
int main()
{
    int M,N,count,found,sum,i,j;
    scanf("%d %d",&M,&N);
    count=0;
    sum=0;
    for(i=M;i<=N;i++)
    {

        j=1;
        found=0;
        while(j<=i)
        {
           if(i%j==0)
           {
               found++;
           }
           j++;
        }
        if(found==2)
        {
            count++;
            sum=sum+i;
        }
    }
    printf("%d ",count);
    printf("%d",sum);
    return 0;
}
