#include <stdio.h>
int qiu_wu(int x)
//���Զ��庯���ǣ��������������void������Ҫ�����������ͣ�
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
//�����죬�״β���found�����Խ���ո�����
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
