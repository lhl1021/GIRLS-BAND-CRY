#include <stdio.h>
int qiuhe(n)
{
    int y,sum;
    sum=0;
    while(1)
    {
    n=n%10;
    y=n/10;
    sum=sum+n;
    if(y==0)
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

    return 0;
}
