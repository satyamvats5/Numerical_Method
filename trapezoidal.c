#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

double F(double x)
{
	return sqrt(sin(x));
}

double func(double A[], double x0, double x1, double n) 
{
	float h = (x1 - x0) / n;
	double val = x0, tmp = 0;
	for(int i = 0; i <= n; i++) {
		A[i] = F(val);
		val += h;
	}
	for(int i = 0 ; i <= n; i++) {
		if(i == 0 || i == n) {
			tmp += A[i];
		} else {
			tmp += 2 * A[i];
		}
	}
	return ( tmp * ( h / 2) );
}

int main()
{
	int n;
	printf("Enter number of intervals: ");
	scanf("%d",&n);
	double A[n+1];
	double x0 = 0, x1 = PI/2;
	double res = func(A, x0, x1, n);
	printf("Required answer is : %.7f\n",res);
	return 0;
}
