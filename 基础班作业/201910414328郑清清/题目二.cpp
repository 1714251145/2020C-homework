//����swap��������д����ʵ�����������ж�ӦԪ��ֵ�Ľ���

#include <stdio.h>
#define N 100
void swap(int*, int*);
int main()
{
	int a[N],b[N];
	int n,i;
	scanf("%d", &n);
	for (i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	for (i = 0; i < n; i++) {
		swap(&a[i], &b[i]);
	
	}
	return 0;
}
void swap(int*x , int*y )
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}
