#include<stdio.h>

int main ()
{
    int i,a[10],j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++)
    {
        if(a[i]!=0)
        {
            printf("%d",i);
            a[i]--;
            break;
        }

    }
    for(i=0;i<10;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            printf("%d",i);
        }
    }
    return 0;
}
