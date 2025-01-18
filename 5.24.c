#include <stdio.h>
int main ()
{

    int t;
    int U,N,D;
    double x;
    scanf("%d %d %d",&N,&U,&D);

    if(U>=N)
    {
       t=U/N;
    }
    else
    {

        t=2;
        while(1)
        {
             N=N-U+D;

             if(U>=N)
             {
                 double x=N/U;
                 if(x<=1)
                    {
                      t=t+1;
                     }
                 else
                    {
                        t=t+2;
                     }
                 break;
             }
             t=t+2;

        }
    }
    printf("%d",t);


    return 0;
}
