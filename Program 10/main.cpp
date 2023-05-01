#include <iostream> 
using namespace std;

int n = 0, m = 0;;

int F1( int n ) 
{
	if (n == 0) 
	{
		return 1;
	} 
	else 
	{
		return n * F1(n-3);
	}
}

int F2( int n ) 
{
	if (n == 0) 
	{
		return 1;
	} 
	else 
	{
		return n * F2(n-2);
	}
}

int F3( int n ) 
{
	if (n == 0) 
	{
		return 1;
	} 
	else 
	{
		return n * F3(n-1);
	}
}

int main() 
{	
	while ( n < 1 ) 
	{
		cout << "n = ";
		cin >> n;
	}
	
	cout << F1(n) - F2(n) + F3(n);
	
	return 1;
}
