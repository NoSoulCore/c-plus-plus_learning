#include <iostream> // Rekursja 3 Dissa Maksym F(x)= F(n-1) - F(n-2) + F(n+2)
using namespace std;

int n = -1;

int F( int n ) 
{
	if  ( n == 0 ) 
	{
		return 1;
	} 
	else if( n == 1)
	{
		return 1;
	}
	else 
	{
		return F(n - 1) - F(n-2) + F(n-3);
	}
}

int main() 
{
	cout << "Write number number, for recursive method" << endl;
	
	while ( n < 0 ) 
	{
		cout << "n = ";
		cin >> n;
	}
		
	cout << F(n);
	
	return 1;
}
