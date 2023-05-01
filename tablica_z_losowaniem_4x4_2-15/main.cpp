#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// tworzenie tablicy 4x4 z liczbami losowanymi z zakresu 2-15

int main(int argc, char** argv) 
{
	srand( time( NULL ) );
	int x = 0;
	float super_tablica_16[4][4];
	float srednie[2][4]; //0 - poziome 1 pionowe
	
	for(int a = 0; a < 4; a++)
	{
//		float srednia = 0;
		
		for(int b = 0; b < 4; b++)
		{
		x = rand()%13+2;
//		srednie=srednie + x;
		super_tablica_16[a][b]=x;
		}
//		super_tablica_16[a][4]=srednia/4;
	}
	
	for(int a = 0; a < 4; a++)
	{
		int skrzynia = 0;
		for(int b = 0; b < 4; b++)
		{
			skrzynia = super_tablica_16[a][b];
			srednie[0][a]=srednie[0][a]+skrzynia;
			
//			cout << srednie[0][a] << " ";
		}
//		cout << endl;
	}
	for(int a = 0; a < 4; a++)
	{
		int skrzynia = 0;
		for(int b = 0; b < 4; b++)
		{
			skrzynia = super_tablica_16[b][a];
			srednie[1][a]=srednie[1][a]+skrzynia;
			
//			cout << srednie[1][a] << " ";
		}
//		cout << endl;
	}
	
	for(int a = 0; a < 4; a++)
	{
		for(int b = 0; b < 5; b++)
		{
		if(b!=4)
		{
			cout << " " << super_tablica_16[a][b] ;
		}
		else
		{
			cout << " sr." << srednie[0][a];
		}
		}
		cout << endl;
	}
	
	for(int i = 0; i < 4; i++)
	{
		cout << srednie[1][i] << " ";
	}
	
	return 0;
}
