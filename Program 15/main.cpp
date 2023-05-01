#include <iostream> //metoda trapezow
using namespace std;
	double start, end, start1, end1, y_center, count_of_trapeze, square, piece;
	
double function(double x) 
{
	return x*x+2*x;
}

int main() 
{
	cout << "[pl] Ten program moge obliczyc pryzblizona wartosc pola figury, " << endl;
	cout << "jedna strona ktorej jest krzywa" << endl;
	
	while (count_of_trapeze <= 0) 
	{
		cout << "podaj liczbe, na ktora ja podziele twoja figure, im wiecej, tym dokladniej" << endl;
		cin >> count_of_trapeze;
	}
	
	
	while (start <= 0) 
	{
		cout << "teraz podaj gdzie zaczyna sie funkcja" << endl;
		cin >> start;
	}
	
	
	
	while (end <= 0) 
	{
		cout << "teraz podaj gdzie konczy sie funkcja" << endl;
		cin >> end;
	}
	
		if(start > end)
		{
			start1 = start;
			end1 = end;
			start = end1;
			end = start1;
		}

	
	piece = (end - start) /  count_of_trapeze;
	
	for  ( int i = 1; i < count_of_trapeze; i++ )
	{
		square = (function ( start + (i * piece + (piece / 2) )) * piece) + square;
	}
	
	cout << "Pole jest rowne " << square << " cm" << endl;
	
	return 0;
}
