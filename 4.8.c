#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=a*3600+b*60+c;
    int y=x/43200;
    int A=a-12;
    if (y>=1)
   {
        printf("%d %d %d PM",A,b,c);
    }
    else
    {
        printf("%d %d %d AM",a,b,c);
    }
    return 0;
}
