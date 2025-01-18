#include<stdio.h>
int main()
{
    int x,y1,y2,y3,t,n;
    scanf("%d%d%d%d",&x,&y1,&y2,&y3);
    t=x-(y1+y2+y3);

    for(n=0;t>0;n=n+1)
    {
        t=t-2;
    }
    printf("%d",n);
    return 0;
}
