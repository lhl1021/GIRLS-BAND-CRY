#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=(1-n);i<=(n-1);i=i+1)
    {
        for(j=1;j<=abs(i);j=j+1)
        {
            printf(" ");
        }
        for(j=1;j<=(2*(n-1)+1-2*abs(i));j=j+1)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
