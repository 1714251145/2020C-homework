//�Ӽ���������10��������ŵ�һά�����У���������С�������һ�����Ի�����������
//���һ�����Ի���Ҫ��������ݽ����Ĵ�����̱�д��һ�������������ж����ݵĴ���Ҫ
//��ָ�뷽��ʵ�֡���������Ϊ��35, 20, 94�� - 23, 39�� - 56, 100, 87, 49, 12.
#include <stdio.h>
#define N 10
void fun(int x[N],int*);
int main()
{
	int a[N];
	int i, j,*b;
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
		fun(a,b);
	for (i = 0; i < N; i++) {
		printf("%d", b[i]);
	}
	

}
void fun(int a[N],int *b)
{
	int i, j,k,min,max,mindex,maxdex;
	for (i = 0; i < N; i++) {
		min = a[0];
		if (a[i] < min) {
			min = a[i];
		}mindex = i;
		
	}
	j = a[mindex];
	a[mindex] = a[0];
	a[0] = j;
	for (i = 0; i < N; i++) {
		max = a[0];
		if (a[i] > max) {
			max = a[i];
		}maxdex = i;
	}
	k = a[maxdex];
	a[maxdex] = a[N - 1];
	a[N - 1] = k;
	for (i = 0; i < N; i++) {
		*b = a[i];
	}


}