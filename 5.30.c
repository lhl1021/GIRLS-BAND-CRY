#include <stdio.h>
int main ()
{
    int n,i,x;
    scanf("%d",&n);
    int count_a,count_b,count_c;
    count_a=0;
    count_b=0;
    count_c=0;
    for(i=1;i<=n;i=i+1)
    {
        scanf("%d",&x);
        if(x>=85)
        {
            count_a=count_a+1;
        }
        if(x<85&&x>=60)
        {
            count_b=count_b+1;
        }
        if(x<60)
        {
            count_c=count_c+1;
        }
    }
    printf("%d %d %d",count_a,count_b,count_c);
    return 0;
}
