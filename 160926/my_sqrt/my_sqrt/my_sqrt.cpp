#include <stdio.h>
#include <math.h>

void mysqrt(double x)
{
	double s = 1;

	int maxiter = 100;
	double tol = 1.e-14;
	int i = 0;
	for (i = 0; i < maxiter; i++)
	{
		printf("Before iteration %d, s = %f\n", i, s);
		double s0 = s;
		s = 0.5*(s + x / s);

		double delta_s = s - s0;
		if (fabs(delta_s / x) < tol)
			break;
	}
	printf("After %d iterations, s = %f\n", i, s);
	
}









int main()
{
	double x = 2;
	mysqrt(x);
	
	//printf("\nmysqrt(%f) = (%f)\n", x, s);

	return 0;
}