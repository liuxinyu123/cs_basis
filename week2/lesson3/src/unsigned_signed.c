#include <stdio.h>

int main (int argc, char *argv[])
{
	int i = -1;
	unsigned int u = 2147483648;

	printf("i = %d %u\n", i, i);
	printf("u = %u %d\n", u, u);

	if (-2147483648 < 2147483647)
		printf ("-2147483648 < 2147483647 is true\n");
	else 
		printf ("-2147483648 < 2147483647 is false\n");

	if (-2147483648 - 1 < 2147483647)
		printf ("-2147483648 - 1 < 2147483647\n");
	else if (-2147483648 - 1 == 2147483647)
		printf ("-2147483648 - 1 == 2147483647\n");
	else
		printf ("-2147483648 - 1 > 2147483647\n");

	return 0;
}
