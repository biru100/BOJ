#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int result = 0;

	cin >> n;

	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		if (temp == n)
			result++;
	}

	cout << result;

	return 0;
}
