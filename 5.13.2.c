#include <stdio.h>
int main()
{
    int i,jc,S,N,t;
    scanf("%d",&N);
    for(i=1,S=0;i<=N;i=i+1)
    {
        for(t=1,jc=1;t<=i;t=t+1)
        {
            jc=jc*t;

        }

        S=jc+S;

    }
    printf("%d",S);
    return;
}
