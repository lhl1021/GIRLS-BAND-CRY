#include <stdio.h>
int main()
{
    int i,n;
    double a=2.0,b=1.0,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        s=s+a/b;
        a=a+b;
        b=a-b;

    }
    printf("%.6f",s);


    return 0;

}
