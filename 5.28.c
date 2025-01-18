#include <stdio.h>
int qiuhe(n)
{
    int y,sum;
    sum=0;
    while(1)
    {
    y=n%10;
    n=n/10;
    sum=sum+y;
    if(n==0)
      {
        break;
       }
    }
    return sum;
}

int main()
{
    int n,sum,k,i;
    scanf("%d",&n);
    i=1;
    k=0;
    if(qiuhe(n)*3+1==n)
    {
        printf("1:%d",n);
    }
    else
    {
    while(1)
    {

       n=qiuhe(n);
       n=3*n+1;


       if(k==n)
       {
          printf("%d:",i);
          printf("%d\n",n);
          break;
       }
       k=n;

       printf("%d:",i);
       printf("%d\n",n);
       i=i+1;
    }
    }
    return 0;
}
