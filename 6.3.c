#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    if (n % 2 == 1 || n < 2 * m || n > 4 * m)
        {
        printf("Error\n");
        }
    else
        {
        int y = (n - 2 * m) / 2;
        int x = m - y;
        printf("%d %d\n", x, y);
        }

    return 0;
}
