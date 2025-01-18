#include <stdio.h>

// �ж��Ƿ�Ϊ����
int run(int year) {
    return ((year % 4 == 0 && year % 100!= 0) || year % 400 == 0)? 366 : 365;
}

// ��ȡ��Ӧ�·ݵ�����
int yue(int year, int month) {
    int day;
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    case 2:
        day = (run(year) == 366)? 29 : 28;
        break;
    }
    return day;
}

// tianshu���������������������·ݡ������������������ܺ�
int tianshu(int y, int m, int d) {
    int sum = d;
    int i;
    for (i = 1; i < m; i++) {
        sum += yue(y, i);
    }
    return sum;
}

int main()
{
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);

    int N = 10000;
    N = N - ( run(y)-tianshu(y, m, d));
    y=y+1;

    while (N > 0) {
        N -= run(y);
        if (N <= 0) {
            N += run(y);
            break;
        }
        y++;
    }

    // �������ڼ����߼�����ʣ������N��ʼ���𲽼�����������
    int remainingDays = N-1;


    m = 1;
    d = 1;
    while (remainingDays > 0)
    {
        int daysInMonth = yue(y, m);
        if (remainingDays <= daysInMonth)
        {
            d += remainingDays;
            if(d > daysInMonth)
            {
                m=m+1;
                d=1;
            }
            break;
        }
        remainingDays -= daysInMonth;
        m++;
        if (m > 12)
        {
            y++;
            m = 1;
        }
    }

    printf("%d-%d-%d\n", y, m, d);
    return 0;
}
