#include <iostream>
#include <string>
using namespace std;
int main() 
{
	int a[4];
	
	for (int i = 0; i < 4; i++)
	{
		cin >> a[i];
	}
	
	for (int i = 0; i < 4; i++)
	{
		if (a[i]%2==0)
		{
			cout << a[i] << ", ";
		}
	}
	cout << endl;
	
	for (int i = 0; i < 4; i++)
	{
		if (a[i]%2==1)
		{
			cout << a[i] << ", ";
		}
	}
	return 0;
}
