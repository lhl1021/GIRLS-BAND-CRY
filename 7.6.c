#include<stdio.h>
int main()
{
    int i,a[10];
    char ch;
    for(i=0;i<10;i++)
        a[i]=0;
    while((ch=getchar())!='!')
    {
        if(ch>=48&&ch<=57)
            a[ch-'0']++;
    }
    for(i=0;i<10;i++)
    {
        printf("The character %c appears %d times\n",i+'0',a[i]);

    }
    return 0;
}
