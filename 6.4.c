#include <stdio.h>
int qiu_wu(int x)
//在自定义函数是，括号内如果不是void，则需要声明变量类型；
{
    int a,count;
    count=0;
    while(1)
    {
    a=x%10;
    x=x/10;
    if(a==5)
    {
        count=count+1;

    }
    if(x==0)
        break;

    }
    return count;

}

int main()
{
    int m,n;
    int i;
    scanf("%d %d",&m,&n);
    int found=0;
    for(i=m;i<=n;i=i+1)
    {
        if(qiu_wu(i)>=1&&(i%3)==0)
        {
//最逆天，首次采用found，可以解决空格问题
            if(found)
            {
                printf(" ");
            }
            else
            {
                found=1;
            }
            printf("%d",i);
        }
    }
    if(found!=1)
    {
        printf("No exist");
    }
    return 0;
}
