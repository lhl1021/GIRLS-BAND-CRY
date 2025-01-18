#include <stdio.h>


int he(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum_a = he(a);
    int sum_b = he(b);
    if (sum_a == b && sum_b == a)
        {
        printf("YES\n");
        }
    else
        {
        printf("NO\n");
        }
    return 0;
}
