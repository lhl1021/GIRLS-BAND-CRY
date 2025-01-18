#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int num = 1;
    int count = 1;
    int remainder = 1;
    while (1) {
        if (remainder % x == 0) {
            printf("%d %d\n", remainder / x, count);
            break;
        }
        remainder = (remainder * 10 + 1) % x;
        count++;
    }

    return 0;
}

    return 0;
}
