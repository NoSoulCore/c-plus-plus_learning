#include <iostream> //Dissa iteracja
using namespace std;
int main() 
{
	int suma, n, m;
	suma = 0;
	
	cout << "Ten progrma oblicza sume od M do N" << endl;
	
	do 
	{
		cout << "m" << "= ";
		cin >> m;
	} while ( m < 0);
	
	do 
	{
		cout << "n" << "= ";
		cin >> n;
	} while ( n < 0);
	
	for (m ; m <= n; m++ )
	{
		suma = suma + m;
	}
	
	cout << suma;
	
	return 0;
}
