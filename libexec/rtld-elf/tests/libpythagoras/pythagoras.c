#include <errno.h>
#include <math.h>

#include "pythagoras.h"

double
pythagorean_theorem(double a, double b)
{

	if (a <= 0 || b <= 0) {
		errno = ERANGE;
		return (-1.0);
	}
	return (sqrt(pow(a, 2) + pow(b, 2)));
}
