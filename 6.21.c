#include<stdio.h>
#include<math.h>
int queren(double x)
{

    int a=sqrt(x);
    int n=pow(a,2);
    if(n==x)
    {
        return 1;
    }
    return 0;

}

int main ()
{
    int i,n,x;
    int count=0;
    scanf("%d",&n);
    i=1;
    while(i*i<=(n/2))
    {

        if(queren(n-i*i))
        {
            x=sqrt(n-i*i);
            printf("%d %d\n",i,x);
            count++;
        }
        i++;

    }
    if(count==0)
    {
        printf("No Solution");
    }

    return 0;
}
