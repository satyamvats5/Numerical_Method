#include <stdio.h>
#define ABS(X)  (X >= 0)?(X):(X * -1)

float F(float x);

float DF(float y);

float newton_rapchson(float F(float), float DF(float), float n, float e);

int main()
{
	float ans = newton_rapchson(F,DF,0,0.0001);
	printf("%.3f\n",ans);
	return 0;
}

float F(float x) 
{
	return (((x * x) * x) + x - 1);
}

float DF(float y) 
{
	return (3 * (y * y) + 1);
}

float newton_rapchson(float F(float), float DF(float), float n, float e) 
{
	float var;
	do {
		var = n;
		n = var - (F(var) / DF(var));
	} while (ABS(n - var) > e);
	
	return n;
}

