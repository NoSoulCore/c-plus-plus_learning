#include <iostream>
using namespace std;

double a, b, sum, minu, mnog, dil;

double function (double a, double b) 
{
	sum = a + b;
	minu = a - b;
	mnog = a * b;
	dil = a / b;
	
	cout << "a + b = " << sum << endl;
	cout << "a - b = " << minu << endl;
	cout << "a * b = " << mnog << endl;
	cout << "a / b = " << dil << endl;
}

int main() 
{
	
	cout << "Im function, mathematic give me two numbers" << endl;
	cin >> a;
	cin >> b;
	cout << function(a,b) << endl;
	return 0;
}
