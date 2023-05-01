#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a, ar[10][1];
	a = 1;
	for (int i = 0; i < 10; i++)
	{
		cin >> ar[i][0];
	}

	for (int i = 0; i < 10; i++)
	{
		if (ar[i][0] % 2 == 1)
		{
			ar[i][0] = ar[i][1];
			ar[i][0] = 0;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << ar[i][0];
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << ar[i][1];
	}

	return 0;
}
