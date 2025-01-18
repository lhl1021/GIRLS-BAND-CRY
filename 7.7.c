#include<stdio.h>
#define MAX 100
int main()
{
    int n,m,s,i,count,out;
    int a[MAX]={0},b[MAX];
    scanf("%d%d%d",&n,&m,&s);
    i=s-1;
    count=0;
    out=0;
    while(out<n)
    {
        if(a[i]==0)
        {
            count++;
            if(count==m)
            {
                a[i]=1;
                b[out]=i+1;
                out++;
                count=0;
            }
        }
        i++;
        if(i==n) i=0;
    }
    for(i=0;i<n;i++)
        printf("%3d",b[i]);
    printf("\n");
    return 0;
}
