#include<stdio.h>
/*�Ӽ���������10��������ŵ�һά�����У���������С�������һ�����Ի���
�����������һ�����Ի���
Ҫ��������ݽ����Ĵ�����̱�д��һ��������
�����ж����ݵĴ���Ҫ��ָ�뷽��ʵ�֡���������Ϊ��35,20,94��-23,39��-56,100,87,49,12.*/

void change(int*);

int main()
{

	int num[10], i;

	for (i = 0; i < 10; i++)

		scanf_s("%d", &num[i]);
	change(num);

	printf("The result is :\n");

	for (int k = 0; k < 10; k++)
		printf("%d ", num[k]);
}
void change(int* num)

{
	int Max=0, Min=0;

	int temp1=0, temp2=0;

	int big, small;//������¼���������С����λ�á�

	for (int i = 0; i < 10; i++)
	{
		if (num[i] >= num[i + 1])
		{
			if (num[i] >= Max)Max = num[i]; 

		}
		else
		{
			if (num[i + 1] >= Max)Max = num[i + 1]; big = i+1;
			if (num[i] <= Min)Min = num[i]; small = i;
		}
	}
	temp1 = num[0]; temp2 = num[9];
	num[0] = Min; num[9] = Max;
	num[small] = temp1; num[big] = temp2;

}