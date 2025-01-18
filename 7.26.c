#include <stdio.h>
#define M 20
#define N 20

// ��ʼ����άƽ�����飬��'#'ת��Ϊ1��ʾ������
void write(char a[M][N], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%c", &a[i][j]);
            if (a[i][j] == '#')
                a[i][j] = 1;
        }
        // ����ÿ���������Ļ��з�������Ӱ����һ�������ȡ
        getchar();
    }
}

// ģ���ڵ������ɱ��Ч����ͳ��������������
void shout(char a[M][N], int x, int y, int m, int n, int *count) {
    // ֱ���������ģ����ӱ���
    if (a[x][y] == 1) {
        (*count)++;
        a[x][y] = 0;
    }
    // �����Ϸ�����
    if (x - 1 >= 0 && a[x - 1][y] == 1) {
        a[x - 1][y] = 0;
        (*count)++;
    }
    // �����·�����
    if (x + 1 < m && a[x + 1][y] == 1) {
        a[x + 1][y] = 0;
        (*count)++;
    }
    // ������߸���
    if (y - 1 >= 0 && a[x][y - 1] == 1) {
        a[x][y - 1] = 0;
        (*count)++;
    }
    // �����ұ߸���
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
