#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    char sex;
    double a;
    i=1;
    while(i<=n)
    {
      scanf("%c",&sex);

      scanf("%lf",&a);

      if(sex=='M')
            {
            printf("%.2lf\n",a/1.09);
            i=i+1;
            }
      if(sex=='F')
            {
            printf("%.2lf\n",a*1.09);
            i=i+1;
            }

    }

    return 0;
}
