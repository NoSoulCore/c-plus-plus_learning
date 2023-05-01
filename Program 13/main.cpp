#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

float height, x, x1, x2, S[10], pocz, koniec, answer;

float F(float x)
{
	return 2*x*x-10*x-5;
}

int main() 
{
	cout << "Calkowanie prostokatami" << endl;
	
	while (koniec <= 2) 
	{
		cout << "Wpisz ilosc odcinkow funkcji, z krokiem 1" << endl;
		cin >> koniec;
	}


	for (int i = 0; i < koniec; i = i + 1 )
	{
		x1 = i;
		
		height = F(x1);
		
		if (height < 0) 
		{
			height = height * -1;
		}
		
		
		cout << "height = " << height << endl;
				
		S[i - 1] = height;
	}
	
	for (int i = 0; i < koniec; i ++) 
	{
		x1 = i + 1;
		x2 = i + 2;
		
		cout << "S" << i << " = " << S[i] << endl;
		
		answer = answer + S[i];
	}
	
	cout << "S = " << answer;
	return 0;
}
