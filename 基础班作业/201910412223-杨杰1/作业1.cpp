#include <stdio.h>

void fun(int tt[M][N], int pp[N])
{
    int i, j, tmax;
    for (i = 0; i < N; ++i) {
        tmax = tt[0][i];
        for (j = 1; j < M; ++j) {
            if (tmax < tt[j][i]) {
                tmax = tt[j][i];
            }
        }
        pp[i] = tmax;
    }
}
int main()
{
    int i, j;
    int tt[M][N], pp[N];
    srand((unsigned)time(NULL));
    for (i = 0; i < M; ++i) {
        for (j = 0; j < N; ++j) {
            tt[i][j] = rand() % 9 + 1;
        }
    }
    printf("�������������\n");
    for (i = 0; i < M; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%d ", tt[i][j]);
        }
        printf("\n");
    }
    fun(tt, pp);
    printf("����֮��Ľ����\n");
    for (i = 0; i < N; ++i) {
        printf("%d ", pp[i]);
    }
    printf("\n");
    return 0;
}