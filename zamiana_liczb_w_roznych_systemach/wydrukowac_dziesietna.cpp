#include <iostream>
#include <string>
using namespace std;

int sys_we,sys_wy;
string liczba_we,liczba_wy;
int liczba_10;
char we[100];

void dane()
{
	cout<<"Podaj podstawe liczby wejsciowej: ";
	cin>>sys_we;
	cout<<"Podaj liczbe wejsciowa: ";
	cin>>liczba_we;
	cout<<"Podaj podstawe liczby wyjsciowej: ";
	cin>>sys_wy;
}

void string_na_tab()
{
	int i;
	for (i=0; i<liczba_we.length(); i++)
	{
		we[i]=liczba_we[i];
	}
}

void tab_na_10()
{
	int i;
	liczba_10 = we[0];
	if (liczba_we.length()>1)
    {
        for (i=1; i < liczba_we.length();i++)
        {
        liczba_10 = liczba_10 * sys_we + we[i];
        }
    }
}

int main()
{
    dane();
    string_na_tab();
	tab_na_10();

    cout << liczba_10 << endl;
}