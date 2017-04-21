#include <iostream>

struct s
{
	int i;
	short s;
	char c;
	double d;

};

struct ss
{
	int i;
	short s;
	double d;
	char c;

};

int main (void)
{
	struct s ss;
	struct ss sss;
	std::cout << sizeof (ss) << std::endl;
	std::cout << sizeof (sss) << std::endl;
	
	return 0;
}
