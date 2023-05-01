#include <iostream>
using namespace std;
int main()
{ float a,b,c;
	cout << "Ten program oblicza czy z podanych stron mogna zrobic trojkat, wielorazowo" << endl;
	do 
	{
		do
		{
			cout << endl;
			if (a < 0) 
			{
				cout << "Tut nie moge byc minusa" << endl;
			}
			cout << "Podaj dlugosc strony A, wieksa od 0" << endl;
			cin >> a;		
		} while (a < 0);
		
		do
		{
			if (b < 0) 
			{
				cout << "Tut nie moge byc minusa, nie nie nie" << endl;
			}
			cout << "Podaj dlugosc strony B, wieksa od 0" << endl;
			cin >> b;
		} while ( b < 0 );
		
		cout << "Podaj dlugosc strony C" << endl;
		cin >> c;
		if (a + b > c)
		{cout << "Z podanych liczb mozna zrobic trojkat" << endl;}
		else if (c + b > a)
		{cout << "Z podanych liczb mozna zrobic trojkat" << endl;}
		else if(c + a > b)
		{cout << "Z podanych liczb mozna zrobic trojkat" << endl;}			
		else 
		{
			cout << "podane liczbe nie spelwniaja warunku dla tworzenia trojkata";
		}
	}while (c >= a + b || c > 0);
		
	return 0;
}
