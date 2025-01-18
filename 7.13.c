#include<stdio.h>
#define N 110
int main ()
{
    int n,m,i,j,found;
    scanf("%d %d",&n,&m);

    found=0;
    int a[N]={0};
    i=0,j=2;
    while(m>0)
    {
      a[i]++;
      i=i+j;
      j++;
      while(i>=n)
      {
        m--;
        i=i-n;
      }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            if(found)
                printf(" ");
            printf("%d",i+1);
            found++;
        }

    }
    if(found==0)
        printf("No choice");
    return 0;
}
