#include <stdio.h>
//union 的存放顺序是所有成员从低地址开始存放，各个数据利用同一个地址空间
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
