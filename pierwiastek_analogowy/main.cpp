#include <iostream>
using namespace std;

//pierwiastek 3 ciego stopnia bez pierwiastku
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//konfiguracja reczna
float V = 8;
float a = 0;
float x = 0;
int granica = 0;

float obliczanie()
{
	for(int i = 0; i < 100; i++)
	{
		a=((V/(x*x))+x+x)/3;
		x=a;
	}
	return a;
}

void dane()
{
	cout << "Ten program oblicza Pierwiastek trzeciego stopnia z liczby" << endl;
	cout << "Wprowadz liczbe z ktorej wyliczamy pierwiastek: ";
	cin >> V;
	while(x < 1)
	{
		cout << "Wprowadz liczbe magiczna (1-100):";
		cin >> x;
	}
}
int main(int argc, char** argv) 
{
	
	dane();
	cout << "Pierwiastek trzeciego stopnia z " << V << " = "<< obliczanie() << endl;
	return 0;
}
