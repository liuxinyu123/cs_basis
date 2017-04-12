#include <stdio.h>

int main (int argc, char *argv[])
{
	short i = -32768;
	unsigned short ui = i;
	int ii = i;
	unsigned int uii = ui;

	printf ("i = %d = %x\n", i, i);
	printf ("ui = %u = %x\n", ui, ui);
	printf ("ii = %d = %x\n", ii, ii);
	printf ("uii = %u = %x\n", uii, uii);

	int j = 32768;
	short s = (short) j;
	int k = s;

	printf ("j = %d = %x\n", j, j);
	printf ("s = %d = %x\n", s, s);
	printf ("k = %d = %x\n", k, k);

	return 0;
}
