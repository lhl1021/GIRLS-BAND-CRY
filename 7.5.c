#include <stdio.h>
int main ()
{
    int n,i,bottom,top,mid,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);

    bottom=0;
    top=n-1;
    while(bottom<=top)
    {
        mid=(top+bottom)/2;
        if(x<a[mid])
          top=mid-1;
        else if(x>a[mid])
          bottom=mid+1;
        else break;
    }
    if(bottom<=top)
        printf("%d",mid);
    else
        printf("Not found");

    return 0;
}
