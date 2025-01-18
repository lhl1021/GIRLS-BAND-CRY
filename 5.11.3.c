#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    int min=a[0];
    int max=a[0];
    int min_count=0;
    int max_count=0;

    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            min_count=1;
        }
        else if(a[i]==min)
        {
            min_count++;
        }

        if(a[i]>max)
        {
            max=a[i];
            max_count=1;
        }
        else if(a[i]==max)
        {
            max_count++;
        }

    }

    printf("%d %d\n",min,min_count);
    printf("%d %d",max,max_count);
    return 0;
}
