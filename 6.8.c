#include <stdio.h>
int main()
{
    int n,used,line,line_1,i,t;
    scanf("%d",&n);
    used=1;
    line=3;
    while(used+2*line<=n)
    {
        used=used+2*line;
        line=line+2;

    }
    line=line-2;
    line_1=(line-1)/2;

    //สฃำเ=n-used;
    for(i=1;i<=line_1;i=i+1)
    {
        for(t=1;t<i;t=t+1)
        {
            printf(" ");
        }
        for(t=1;t<=line+2-2*i;t=t+1)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=line_1;i=i+1)
    {
        printf(" ");
    }
    printf("*");
    printf("\n");
    for(i=1;i<=line_1;i=i+1)
    {
        for(t=1;t<=(line_1-i);t=t+1)
        {
            printf(" ");
        }
        for(t=1;t<=2*i+1;t=t+1)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("%d",n-used);
    return 0;
}
