#include <iostream>
using namespace std;

int main(void)
{
	int min = 0, man = 0;

	int temp;
	for (int i = 0; i < 4; i++)
	{
		cin >> temp;
		min += temp;
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> temp;
		man += temp;
	}

	cout << (min > man ? min : man);

	return 0;
}
