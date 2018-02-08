<<<<<<< HEAD
/* 

* Implementing Newton Raphson method 
  to find the roots of a given equation.

* F :- Given function- (x^2 + X - 1)

* DF :- Derivative of F.

* n = starting value.

* Minimum Difference.

*/

=======
>>>>>>> 3e9f827334d1449fd75986f72fec31cc7b02a5d2
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

