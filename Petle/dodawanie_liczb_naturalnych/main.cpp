#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	int p1, p = 0, k = 0, suma = 0;
	cout << "Ten program liczy sume liczb naturalnych do P do K" << endl;
	cout << "Wprowadz P" << endl;
	cin >> p;
	p1 = p;
	cout << "Wprowadz K" << endl;
	cin >> k;
	
	while(p<=k)
	{
		suma += p;
		p++;
	}
	
	cout << "Suma liczb od "<< p1 << " do " << k << " = " << suma << endl;
	
	return 0;
}
