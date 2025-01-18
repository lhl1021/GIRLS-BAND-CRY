#include<stdio.h>
int main ()
{
    int n,m;
    scanf("%d",&n);
    while(1)
    {
        if(n%2==0)
         {
          m=n;
          n=n/2;
          printf("%d/2=%d\n",m,n);
          }
        else
          {
          m=n;
          n=n*3+1;
          printf("%d*3+1=%d\n",m,n);
          }
        if(n==1)
        {
            break;
        }
    }
    return 0;
}
