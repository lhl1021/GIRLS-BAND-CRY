#include <stdio.h>
int main ()
{
    int i,n,N,k,g;
    i=1;

    scanf("%d",&n);
    N=n;
    if(n<0)
    {
        printf("fu");
        printf(" ");
    }
    while(n/10!=0)
    {
        n=n/10;
        i=i+1;
    }
    printf("%d\n",i);
    printf("%d",N);

    while(i!=0)
    {
      k=N/pow(10,i-1);

      if(k==0)  printf("ling");
      if(k==1)  printf("yi");
      if(k==2)  printf("er");
      if(k==3)  printf("san");
      if(k==4)  printf("si");
      if(k==5)  printf("wu");
      if(k==6)  printf("liu");
      if(k==7)  printf("qi");
      if(k==8)  printf("ba");
      if(k==9)  printf("jiu");

      i=i-1;
      N=N-k*pow(10,i-1);
      printf("%d",N);
      if(i>0)
        printf(" ");


    }


    return 0;
}
