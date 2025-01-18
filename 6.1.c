#include <stdio.h>
int main ()
{
    int n;
    int count=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i=i+1)
    {
        if(n%i==0)
        {
            count=count+1;
        }
        else;
    }
    if(count==2)
        printf("YES");
    else
        printf("NO");
    return 0;
}
