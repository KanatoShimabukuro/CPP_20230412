#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main() {

	// float 三角関数
	float rad_f = M_PI / 4.0f;
	float sin_f = sinf(rad_f);
	float cos_f = cosf(rad_f);
	float tan_f = tanf(rad_f);

	// double 三角関数
	double rad_d = M_PI / 4.0;
	double sin_d = sin(rad_d);
	double cos_d = cos(rad_d);
	double tan_d = tan(rad_d);


	printf("%f", sin_f);

	return 0;
};
