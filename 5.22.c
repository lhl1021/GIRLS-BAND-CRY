#include<stdio.h>
int main ()
{
    int a,b,c,sum,i,n,t;
    scanf("%d",&n);
    a=1;
    b=1;
    c=1;
    i=6;
    sum=1;
    if(n<=2)
    {
        printf("1");
    }
    else if(n<=4&&n>2)
       {
        printf("4");
       }
    else if(n<=6&&n>4)
       {
        printf("5");
       }
    else
    {
        while(n>6)
        {
          t=c;
          c=c+b;
          b=a;
          a=t;
          sum=a+b+c;
          if(sum*2>=n)
          {
             break;
          }
          i=i+1;
        }
        printf("%d",i);

    }


    return 0;
}
