#include <stdio.h>
int jitian (int x,int y,int z)
{
    int day;
    int sum;
    int sum_month_day=0;

    for(y=y-1;y>=1;y=y-1)
    {
        switch(y)
        {
        case 2:
        {
            if(x%4==0&&x%100!=0||x%400==0)
            {
                day=29;
            }
            else
            {
                day=28;
            }
            break;
        }

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
           {
            day=31;
            break;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            {
            day=30;
            break;
            }
        }
    sum_month_day=sum_month_day+day;
    }
    sum=sum_month_day+z;

    return sum;
}
int main ()
{
    int x,y,z,a,b,c,m,n,sum;
    int i;
    scanf("%d-%d-%d",&x,&y,&z);
    scanf("%d-%d-%d",&a,&b,&c);
    m=jitian(x,y,z);
    n=jitian(a,b,c);
    sum=0;
    for (i = x; i < a; i++)
        {
        if (i % 4 == 0 && (i % 100!= 0 || i % 400 == 0))
           {
            sum += 366;
           }
        else
           {
            sum += 365;
            }
        }
    sum += n - m;
    printf("%d",sum);
    return 0;
}
