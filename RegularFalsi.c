/* 

* Implementing Regular-Flasi method 
  to find the roots of a given equation.

* F :- Given function- (x^2 + X - 1)

* n = starting value.

* Minimum Difference.

*/

#include <stdio.h>
#define ABS(X) (X > 0)?(X):(X * (-1))

float F(float);

float REgularFalsi(float F(float), float, float, float);		

int main()
{
	float res = REgularFalsi(F,0,1,0.001);
	printf("Roots of given equation is :- : ");
	printf("%.3f\n",res);
	return 0;
}

float F(float x) 
{
	return ((x * x) * x + (x)  - 1);
}
 
float REgularFalsi(float F(float),float an, float bn, float E)
{
	float val,b,Fa,Fb,tmp = bn;
	do {
  		Fa = F(an);
		Fb = F(bn);
		val = ((an * Fb) - (bn * Fa)) / (Fb - Fa);
		//printf("%f %f %f\t",Fa,Fb,val);  for debugging
		if((F(val) * tmp) < 0) {
			 b = val - an, an = val;
		} else {
			b = val - bn, bn = val;
		}
		tmp = val;
	} while(ABS(b) > E);
	return val;
}
		

