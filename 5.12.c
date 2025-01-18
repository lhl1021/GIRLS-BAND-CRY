#include <stdio.h>

int main() {
    int num;
    int index = 1;
    while (scanf("%d", &num)!= EOF) {
        if (num == 250) {
            printf("%d\n", index);
            break;
        }
        index++;
    }
    return 0;
}
