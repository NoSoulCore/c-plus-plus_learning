#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int x[5],y[5]; //point[x][y]
int a,b,c,d; //dla rownania liniowego
int A,B,C,D; //czworokat
int czy_nalezy[4]; //przechowuje testy dla wszystkich stron, i jezeli we wszystkie rekordy true, punkt nalezy
int z;//dla testowania programu

bool pos_point() 
{
	for (int i = 1; i < 5; i++)
	{
		if(i!=4)	//typowe operacji dla liniowego, wyliczamy a,b,c, d - pokazuje gdzie lezy punkt wedlug prostej do ktorej nalezy odczinek
		{
			a = -(y[i]-y[i-1]);
			b = x[i]-x[i-1];
			c = -(a*x[i-1]+b*y[i-1]);
			d = a*x[4]+b*x[4]+c;
			if(d >= 0)
			{
				czy_nalezy[i-1]=1;
			}
			else
			{
				czy_nalezy[i-1]=0;
			}
		}
		else //dla czwartego i, zrobimy wyjatek
		{
			a = -(y[0]-y[i-1]);
			b = x[0]-x[i-1];
			c = -(a*x[i-1]+b*y[i-1]);
			d = a*x[4]+b*x[4]+c;
			if(d >= 0)
			{
				czy_nalezy[i-1]=1;
			}
			else
			{
				czy_nalezy[i-1]=0;
			}
		}
		
	}
	return true;
}

void take_data()
{
	cout << "Wprowadz wspolrzedne punktow czworokat w kierunku przeciwnym do ruch strzalky zegara" << endl;
	cout << "Potem wrpowadz wszpolrzedne punktu dla sprawdzania" << endl;
	
	for(int i = 1; i < 6; i ++)
	{
		if(i==1) 
		{
			cout << "punkt A" << endl;
		}
		else if(i==2)
		{
			cout << "punkt B" << endl;
		}
		else if(i==3)
		{
			cout << "punkt C" << endl;
		}
		else if(i==4)
		{
			cout << "punkt D" << endl;
		}
		else if(i==5)
		{
			cout << "punkt X" << endl;
		}
		cout << "x=";
		cin >> x[i-1];
		cout << "y=";
		cin >> y[i-1];
	}
}

void result()
{
	for (int i = 0; i < 4; i++)
	{
		cout << czy_nalezy[i] << endl;
		if (czy_nalezy[i]==0)
		{
			z=1;
		}
	}
	
	if(z==0)
	{
		cout << "punkt nalezy";
	}
	else
	{
		cout << "punkt nie nalezy";
	}
}

int main(int argc, char** argv) 
{
	take_data();
	pos_point();
	result();
	return 0;
}
