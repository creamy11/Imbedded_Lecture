#include <stdlib.h>
#include <stdio.h>

int main()
{
	double*pX; //포인터 선언
	int n = 1; //포인터 사이즈
	pX = (double*)malloc(n * sizeof(double)); //포인터에 메모리 할당

	double X = 11; //포인터가 가리킬 값
	pX = &X; //포인터에 X의 주소를 넣는다.
	
	printf("X 의 주소: %d\n", &X);
	printf("X 값: %f\n", X);	
	printf("pX 값: %d\n", pX);
	printf("pX 가 가리키는 값: %f\n", *pX);
	
	return 0;
}