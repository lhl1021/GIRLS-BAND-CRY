#include <stdio.h>
int main ()
{
  int n,a,b,c;
  scanf("%d/%d",&a,&b);
  n=1;
  while(n<=a&&n<=b)
  {
    if(a%n==0&&b%n==0) c=n;
      n++;
   }

   a=a/c;
   b=b/c;
   printf("%d/%d",a,b);
    return 0;
}
