//���ܣ����һ������void fun(int tt[M][N],int pp[N])��
//ttָ��һ��M��N�еĶ�ά���飬�����ά����ÿ��
//����СԪ�أ������η���pp��ָһά�����С���ά
//�����е��������������и��衣

#include <stdio.h>
#define M 3
#define N 3
void fun(int[M][N], int[N]);
int main()
{
	int  i,j;
	int tt[M][N];
	int pp[N];
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &tt[i][j]);
		}
	}
	fun(tt, pp);
	for (i = 0; i < N; i++) {
		printf("%d ",pp[i]);
	}
	return 0;
	

}
void fun(int tt[M][N], int pp[N])
{
	int a, b,min;
	for (a = 0; a < N; a++) {
		min = tt[a][0];
		for (b = 0; b < M; b++) {
			
			if (tt[a][b] < min) {
				min = tt[a][b];
			}
			
		}
		pp[a] = min;
	}
}