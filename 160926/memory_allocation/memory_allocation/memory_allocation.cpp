#include <stdlib.h>
#include <stdio.h>

int main()
{
	double*pX;
	int n = 1024;
	pX = (double*)malloc(n * sizeof(double));

	if (pX == NULL)
	{
		printf("Insufficient memory\n");
		return 0;
	}
		
	free(pX);
	return 0;
}