#include <stdio.h>
#include <math.h>
int main ()
{
  int a,n,t,i,b;
  int sum;
  scanf("%d %d",&a,&n);

  i=1;
  sum=0;
  while(i<=n)
  {
      if(i==1)
      {
          b=a;
      }
      if(i>1)
      {

          for(t=2,b=a;t<=i;t=t+1)
         {
            b=b*10+a;
          }
      }
      sum=sum+b;
      i=i+1;


  }
  printf("%d",sum);
  return 0;
}
