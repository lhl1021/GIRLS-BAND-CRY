#include<stdio.h>
#define N 30
int main ()
{
    int x,y,i,found;
    found=-1;
    scanf("%d %d",&x,&y);
    int a[N];
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=0;i<x;i++)
        if(a[i]==y)
    {
        found=i;

    }
    if(found==-1)
        printf("Not Found");
    else
        printf("%d",found);
    return 0;
}
