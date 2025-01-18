#include<stdio.h>
#include<ctype.h>
int main ()
{
    char ch;
    while((ch=getchar())!='\n')
    {
        if(isalpha(ch))
        {
            if(islower(ch))
            {
                ch=((ch-'a')+1)%26+'A';
            }
            else
            {
                ch=(ch-'A'+1)%26+'a';
            }

        }

    }
putchar(ch);
    return 0;
}
