#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float a, b, c, x1, x2, delta;

void Wprowadzanie () 
{
	cout << "Podaj A" << endl;
	cin >> a;
	cout << "Podaj B" << endl;
	cin >> b;
	cout << "Podaj C" << endl;
	cin >> c;
}

float Delta ( float a, float b, float c) 
{
	delta = (b*b)-(4*a*c);
}

float Wynik1 () 
{
	cout << "Brak wynikow" << endl;
}

float Wynik2 ( float a, float b, float c) 
{
	x1 = ( -b + sqrt ( delta ) ) / ( 2 * a );
	cout << "x = " << x1 << endl;
}

float Wynik3 ( float a, float b, float c ) 
{
	x1 = ( -1 * b + sqrt(delta) ) / ( 2 * a );
	x2 = ( -1 * b - sqrt(delta) ) / ( 2 * a );
	
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}

int main() 
{
	cout << "FunctioRobiator v1.0 " << endl;
	
	Wprowadzanie();
	Delta(a,b,c);
	
	if (a = 0) 
	{
		cout << "Rownanie nie kwadratowe." << endl;
	}
	else
	{
		if (delta < 0) 
		{
			Wynik1();
		}
		else if (delta = 0)
		{
			Wynik2(a,b,c);
		}
		else 
		{
			Wynik3(a,b,c);
		}
	}
	
	return 0;
}
