#include<stdio.h>
#define M 3
#define N 4
/*    ���һ������void fun(int tt[M][N],int pp[N])��
      ttָ��һ��M��N�еĶ�ά���飬�����ά����ÿ��
      ����СԪ�أ������η���pp��ָһά�����С���ά
      �����е��������������и��衣*/


void fun(int tt[M][N], int pp[N]);
int main()
{ 
	int tt[M][N], int pp[N];
	printf("Please input the numbers:");

	for (int i = 0; i < M; i++) {

		for (int j = 0; j < N; j++) {

			scanf_s("%d", &tt[i][j]);
		}
	}
	fun(tt, pp);
	printf("The result is:\n");

	for (int i = 0; i < N; i++)
		printf("%d ", pp[i]);

	return 0;
}

void fun(int tt[M][N], int pp[N])
{
	int i, j, t;

	for (i = 0; i < N; i++)
	{
		t = tt[0][i];//soul

		for (j = 0; j < M; j++)
		{
			if (tt[j][i] < t)
				t = tt[j][i];

		}
		pp[i] = t;//soul

	}
}