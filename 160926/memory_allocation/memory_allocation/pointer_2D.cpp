#include <stdlib.h>
#include <stdio.h>

int main()
{
	double**pX; //2���� ������ ����
	const int m = 3; //������ �� ������
	const int n = 4; //������ �� ������
	
	pX = (double**)malloc(sizeof(double*) * m);  //������ �� �޸� �Ҵ�
	for (int i = 0; i < m; i++) // ������ �� �޸� �Ҵ�
	{
		*(pX + i) = (double*)malloc(n * sizeof(double)*n);
	}
	
	//�����Ϳ� �� �Է�
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			pX[i][j] = i*n + j;
		}
	}
	
	//�����Ͱ� ����Ű�� �� ���
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("pX[%d][%d] �� ����Ű�� ��: %f\n", i, j, pX[i][j]);
		}
		printf("\n");
	}

	return 0;
}