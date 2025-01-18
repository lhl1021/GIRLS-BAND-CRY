#include<stdio.h>
void paixu (int a[],int size)
{
    int t,i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]<a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
}



int main ()
{
    int n,i,sum,M,N;
    int a[3];
    int number=1;
    scanf("%d",&n);
    while(1)
    {

        for(i=0;i<3;i++)
        {
            a[i]=n%10;
            n=n/10;
        }
        paixu(a,3);
        M=a[0]*100+a[1]*10+a[2];
        N=a[2]*100+a[1]*10+a[0];
        sum=M-N;
        printf("%d: %d - %d = %d\n",number,M,N,sum);


        if(sum==495)
            break;


        n=sum;
        number++;


    }

    return 0;
}
