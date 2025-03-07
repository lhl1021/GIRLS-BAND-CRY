#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n][n];
    // 初始化杨辉三角形数组
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    // 输出杨辉三角形
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - i; k++) {
            printf("         ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%10d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
