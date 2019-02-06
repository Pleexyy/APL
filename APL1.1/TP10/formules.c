	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>

	#define M_PI 3.14159265358979323846 // Permet de définir PI
	int main(void) {

	float res = 0;

	res = sqrt(fabs(log(0.5)));
	printf("%f\n", res);	

	res = sin((M_PI)/6);
	printf("%f\n", res);

	res = atan(pow(13, 2));
	printf("%f\n", res);

	res = exp(pow(-1, 4));
	printf("%f\n", res);

	res = log(-3);
	printf("%f\n", res);

	res = sqrt(pow(2, 2));
	printf("%f\n", res);
}


