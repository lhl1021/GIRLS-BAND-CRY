#include<stdio.h>
int main ()
{
    int n,count,i,N;
    scanf("%d",&n);
    N=n;
    char ch;
    ch='A';
    n=(1+n)*n/2;
    count=1;
    for(i=0;i<n;i++)
    {
        printf("%c",ch+i);
        if(count==N)
        {
            printf("\n");
            N=N-1;
            count=1;
            continue;
        }
        count++;
        printf(" ");
    }

    return 0;
}
