#include<stdio.h>
#define N 1100
int Max(int a[],int n)
{
    int i,max_num,max;
    max=0;

    for(i=0;i<n;i++)
    {
        if(max<=a[i])
            {
                max=a[i];
                max_num=i;
            }
    }
    return max_num;

}


int main ()
{
    int a[N][12];
    int count[1000];
    int n,i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i][0]);
        for(j=1;j<=a[i][0];j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=a[i][0];j++)
            count[a[i][j]]++;

    }
    t=Max(count,1000);
    printf("%d %d",t,count[t]);
    return 0;
}
