#include <stdio.h>
#define M 20
#define N 20

// 初始化二维平面数组，将'#'转换为1表示有蚊子
void write(char a[M][N], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%c", &a[i][j]);
            if (a[i][j] == '#')
                a[i][j] = 1;
        }
        // 吸收每行输入完后的换行符，避免影响下一行输入读取
        getchar();
    }
}

// 模拟炮弹发射的杀伤效果，统计消灭蚊子数量
void shout(char a[M][N], int x, int y, int m, int n, int *count) {
    // 直接命中中心，蚊子毙命
    if (a[x][y] == 1) {
        (*count)++;
        a[x][y] = 0;
    }
    // 处理上方格子
    if (x - 1 >= 0 && a[x - 1][y] == 1) {
        a[x - 1][y] = 0;
        (*count)++;
    }
    // 处理下方格子
    if (x + 1 < m && a[x + 1][y] == 1) {
        a[x + 1][y] = 0;
        (*count)++;
    }
    // 处理左边格子
    if (y - 1 >= 0 && a[x][y - 1] == 1) {
        a[x][y - 1] = 0;
        (*count)++;
    }
    // 处理右边格子
    if (y + 1 < n && a[x][y + 1] == 1) {
        a[x][y + 1] = 0;
        (*count)++;
    }
}

int main() {
    int m, n, k, x, y;
    char a[M][N];
    scanf("%d %d", &m, &n);
    write(a, m, n);

    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d %d", &x, &y);
        int count = 0;
        shout(a, x, y, m, n, &count);
        printf("%d\n", count);
    }

    return 0;
}
