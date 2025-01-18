#include<stdio.h>
#define N 30
int main ()
{
    int n,i,j,found,x,y,k,t;
    t=0;
    found=0;
    k=0;
    int a[N],b[N],c[60];
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&y);
    for(i=0;i<y;i++)
    {
        scanf("%d",&b[i]);
    }


    for(i=0;i<x;i++)
    {
        found=0;
        for(j=0;j<y;j++)
        {
            if(a[i]==b[j])
                found++;
        }
        if(found==0)
            {
                t=0;
                for(j=0;j<k;j++)
                    if(c[j]==a[i])
                    t++;
                if(t==0)
                    c[k++]=a[i];
            }
    }

    for(i=0;i<y;i++)
    {
      found=0;
      for(j=0;j<x;j++)
      {
        if(b[i]==a[j])
        {
            found++;
        }
      }
      if(found==0)
            {
                t=0;
                for(j=0;j<k;j++)
                    if(c[j]==b[i])
                    t++;
                if(t==0)
                    c[k++]=b[i];
            }
    }
    printf("%d",c[0]);
    for(i=1;i<k;i++)
    {
        printf(" %d",c[i]);
    }


    return 0;
}
