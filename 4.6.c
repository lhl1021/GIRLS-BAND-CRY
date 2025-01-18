# include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x > 85)
    {
        printf("very good");
    }
    if (x >= 65 && x <= 85)
    {
        printf("good");
    }
    if (x < 65)
    {
        printf("no good");
    }
    return 0;
}
