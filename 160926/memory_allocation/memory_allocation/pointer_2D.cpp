#include <stdlib.h>
#include <stdio.h>

int main()
{
	double**pX; //2차원 포인터 선언
	const int m = 3; //포인터 행 사이즈
	const int n = 4; //포인터 열 사이즈
	
	pX = (double**)malloc(sizeof(double*) * m);  //포인터 행 메모리 할당
	for (int i = 0; i < m; i++) // 포인터 열 메모리 할당
	{
		*(pX + i) = (double*)malloc(n * sizeof(double)*n);
	}
	
	//포인터에 값 입력
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			pX[i][j] = i*n + j;
		}
	}
	
	//포인터가 가리키는 값 출력
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("pX[%d][%d] 가 가리키는 값: %f\n", i, j, pX[i][j]);
		}
		printf("\n");
	}

	return 0;
}