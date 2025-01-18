#include<stdio.h>
int qiu(int n)
{
    n=(n+1)/2;
    return n;

}
int main ()
{
    int n,a,i,k;
    scanf("%d %c",&n,&a);
    for(i=1;i<=qiu(n);i=i+1)
    {
        for(k=1;k<=n;k=k+1)
        {
            printf("%c",a);
        }
        printf("\n");
    }

}
