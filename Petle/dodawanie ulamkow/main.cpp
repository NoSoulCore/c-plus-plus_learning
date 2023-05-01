#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	double p = 0, k = 0, suma = 0;
	cout << "Ten program liczy sume ulamkow naturalnych od P do K" << endl;
	
	cout << "Wprowadz P" << endl;
	cin >> p;
	cout << "Wprowadz K" << endl;
	cin >> k;
	
	for (double i = p; i <= k; i++)
	{
		suma=suma+1/i;
	}
	
	cout << "Suma liczb od "<< p << " do " << k << " = " << suma << endl;
	
	return 0;
}
