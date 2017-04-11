#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main (int argc, char *argv[])
{
	float f = 0;

	cout.setf (std::ios::fixed, std::ios::floatfield);

	while (1)
	{
		cout << "please input a float num: ";
		cin >> f;
		cout << f << endl;		
	}

	return 0;
}
