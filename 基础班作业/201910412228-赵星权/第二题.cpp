#include<stdio.h>
#define N 3
void main()
{
	int i, temp;
	int a[3], b[3];
	printf("��������������Ϊ��һ������:\n");
	for (i = 0;i <= 2;i++)
		scanf("%d", &a[i]);
	printf("��������������Ϊ�ڶ�������:\n");
	for (i = 0;i <= 2;i++)
		scanf("%d", &b[i]);
	for (i = 0;i <= 2;i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	printf("����Ԫ��֮��ĵ�һ��������:\n");
	for (i = 0;i <= 2;i++)
		printf("%d\t", a[i]);
	printf("\n");
	printf("����Ԫ��֮��ĵڶ���������:\n");
	for (i = 0;i <= 2;i++)
		printf("%d\t", b[i]);
	printf("\n");
}