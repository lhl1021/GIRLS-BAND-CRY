#include <stdio.h>
int main ()
{
    int x;
    int sum;
    sum=0;
    while(1)
    {
        scanf("%d",&x);
        if(x>0)
        {
            if(x%2==1)
              {
                  sum=sum+x;
              }
        }
        else
        {
            break;
        }
    }
    printf("%d",sum);
    return 0;
}
