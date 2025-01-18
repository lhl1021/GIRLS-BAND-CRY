#include<stdio.h>
int main ()
{
    char ch;
    int num[26],i;
    memset(num,0,26*sizeof(int));
    int count=0;
    while((ch=getchar())!='\n')
    {
        if(ch>='A'&&ch<='Z')
            num[ch-'A']++;
    }

    for(i=0;i<26;i++)
    {
        printf("%c(%d)",i+'A',num[i]);
        count++;
        if(count%5==0)
            {
                printf("\n");
                continue;
            }



    }
    return 0;
}
