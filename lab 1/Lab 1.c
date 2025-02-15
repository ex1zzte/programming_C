#include <stdio.h>
#include <math.h>


int main()
{
	double a,b,c;
	double x1,x2,d;
	a = 5.3;
	b = 2.5;
	c = 1.1;
	d = b*b - 4 * a * c;
	x1 = -b + sqrt(d)/(2*a);
	x1 = -b - sqrt(d)/(2*a);
	printf("x1 = %lf \n",x1);
	printf("x2 = %lf \n",x2);
	
    return 0;
}
