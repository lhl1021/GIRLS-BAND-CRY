#include<stdio.h>
#include<math.h>
int main ()
{
    long long n,temp,i,len,len_max,j,start;
    scanf("%lld",&n);

    len_max=0;
    for(i=2;i<=sqrt(n);i++)
    {
        temp=n;
        len=0;
        j=i;
        while(temp%j==0)
        {
            temp=temp/j;
            j++;
            len++;
        }
        if(len>len_max)
        {
            len_max=len;
            start=i;
        }

    }
   if(len_max==0)
    {
        start=n;
        printf("%lld\n",len_max+1);
        printf("%lld",start);
    }
    if(len_max>1)
    {
        printf("%lld\n",len_max);
        printf("%lld",start);
        for(i=1;i<len_max;i++)
        {
            start++;
            printf("*%lld",start);

        }
    }
    else if(len_max==1)
    {
        printf("%lld\n",len_max);
        printf("%lld",start);
    }


    return 0;
}
