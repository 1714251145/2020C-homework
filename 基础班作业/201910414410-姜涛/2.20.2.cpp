#include"stdio.h"

	void AB(int A[])
	{
		int max, min;
		for (int a = 0;a < 10;a++)
		{
			while (a < 9) {
				if (A[a] >= A[a + 1])
				{
					max = A[a];
					min = A[a + 1];
				}
				else
				{
					max = A[a + 1];
					min = A[a];
				}
			}
		}
		A[0] = min;
		A[9] = max;
	}
	int main()
	{
		int A[10];
		printf("������ʮ������.....");
		for (int a = 0;a < 10;a++)
		{
			scanf_s("%d", &A[a]);
		}
	AB(A);
	printf("�������������飺");
		for (int a = 0;a < 10;a++)
		{
			printf("%d", A[a]);
		}
	return 0;
}