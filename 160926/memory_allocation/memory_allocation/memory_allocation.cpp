#include <stdlib.h>
#include <stdio.h>

int main()
{
	double*pX; //������ ����
	int n = 1; //������ ������
	pX = (double*)malloc(n * sizeof(double)); //�����Ϳ� �޸� �Ҵ�

	double X = 11; //�����Ͱ� ����ų ��
	pX = &X; //�����Ϳ� X�� �ּҸ� �ִ´�.
	
	printf("X �� �ּ�: %d\n", &X);
	printf("X ��: %f\n", X);	
	printf("pX ��: %d\n", pX);
	printf("pX �� ����Ű�� ��: %f\n", *pX);
	
	return 0;
}