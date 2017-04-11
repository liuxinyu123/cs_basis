#include <stdio.h>

int main (int argc, char *argv[])
{
	union NUM
	{
		int a; 
		char b;
	}num;

	num.a = 0x12345678;

	if (0x12 == num.b)
		printf ("Big Endian\n");
	else
		printf ("Little Endian\n");

	printf ("%x\n", num.b);

	return 0;
}
