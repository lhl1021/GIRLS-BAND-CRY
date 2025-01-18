#include <stdio.h>
int main()
{
    double sum,term,x;
    int i;
    i=1;
    sum=1;
    term=1;
    scanf("%lf",&x);
    while (1)
    {
        term=term*x/i;
        if(term<0.000001)
        {
            break;
        }
        sum=sum+term;
        i=i+1;

    }
    printf("%.5lf",sum);
    return 0;
}
