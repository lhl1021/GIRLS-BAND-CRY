#include<stdio.h>
#include<math.h>
int su(int x)
{
    int i;

    for(i=2;i<sqrt(x);i++)
    {
        if(x%i==0)
            return 0;

    }
    return 1;
}
int main ()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(su(i))
        {
            if(su(n-i))
            {
                printf("%d = %d + %d",n,i,n-i);
                break;
            }
        }
    }
    return 0;
}
