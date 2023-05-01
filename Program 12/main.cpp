#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

float west, south, x, x1, x2, S[10], gipotenuza, pocz, koniec, katet, answer;

float F(float x)
{
	return 2*x*x-10*x-5;
}

int main() 
{
	cout << "Hi" << endl;
	
	while (koniec <= 2) 
	{
		cin >> koniec;
	}


	for (int i = 1; i < koniec; i++ )
	{
		x1 = i;
		x2 = i + 1;
		
		south = F(x1);
		west = F(x2);
		
		if (south < 0) 
		{
			south = south * -1;
		}
		
		if (west < 0) 
		{
			west = west * -1;
		}
		
		cout << "south = " << south << endl;
		cout << "west = " << west << endl;
				
		S[i - 1] = (west + south) * (x2 - x1) / 2;
	}
	
	for (int i = 0; i < koniec; i ++) 
	{
		x1 = i + 1;
		x2 = i + 2;
		
		cout << "S" << i << " = " << S[i] << endl;
		cout << " F1:F2 = " << F(x1) << " : " << F(x2) << endl;
		
		answer = answer + S[i];
	}
	
	cout << "S = " << answer;
	return 0;
}
