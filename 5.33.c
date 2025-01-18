#include<stdio.h>
int su(int x)
{
    int i,count,y;
    count=0;
    for(i=1;i<=x;i=i+1)
    {
        if((x%i)==0)
        {
            count=count+1;
        }
    }
    if(count==2)
        y=1;
    else
        y=0;
    return y;
}

int main ()
{
    int n,i,x,y;
    scanf("%d",&n);
    for(i=n;;i=i+1)
    {
        x=su(i);
        y=su(i+2);
        if((x==1)&&(y==1))
        {
            printf("%d %d",i,i+2);
            break;
        }
    }
    return 0;
}
