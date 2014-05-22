#include "pythagoras.h"

#include <stdio.h>

int
main(int argc, char *argv[])
{
	float hypotenuse = pythagorean_theorem(3, 4);
	printf("the hypotenuse of 3 and 4 is %d\n", (int) hypotenuse);

	return 0;
}
