#include<stdio.h>
int main ()
{
    int a,b,c,i,j,k,total;
    int count=0;
    int x;
    scanf("%d",&x);

    for(i=x/5;i>0;i--)
    {
        k=x-i*5;

        for(j=k/2;j>0;j--)
        {
            c=x-i*5-j*2;
            if(i>0&&j>0&&c>0)
            {
                total=i+j+c;
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,c,total);
                count++;
            }
        }


    }
    printf("count=%d",count);
    return 0;
}
