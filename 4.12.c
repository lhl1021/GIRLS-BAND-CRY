# include <stdio.h>
int main()
{
    int x;
    scanf ("%d",&x);
    int a=x%5;
    if(a>=1&&a<=3)
    {
        printf("Fishing in day %d",x);
    }
    else
    {
        printf("Drying in day %d",x);
    }
    return 0;
}
