#include <stdio.h>



int main()
{
  int t,n,s,T;
  scanf("%d",&t);
  T=t;
  t=t%90;
  n=T/90;

  if(t<30||(t>45&&t<60))
  {
    if(t<10)
    {
        s=270*n+9*t;
    }
    else if(t>=10&&t<30)
    {
        s=270*n+90;
    }
    else if(t>45&&t<=50)
    {
        s=(t-30)*9+270*n;
    }
    else
    {
        s=180+270*n;
    }
    printf("^_^ %d",s);

  }
  if((t>30&&t<45)||(t>60&&t<90))
  {
    s=3*T;
    printf("@_@ %d",s);

  }
  if((t==30)||(t==45)||(t==60)||(t==0))
  {
    s=3*T;
    printf("-_- %d",s);
  }


    return 0;
}
