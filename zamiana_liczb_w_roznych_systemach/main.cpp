#include <iostream>
#include <string>
using namespace std;

//algorytm hornera

int sys_we,sys_wy,c[100],L,j,liczba_wy;
string liczba_we;
int liczba_10;
char we[100];
bool pierwsza_cyfra = false;

void dane()
{
	cout<<"Podaj podstawe liczby wejsciowej: ";
	cin>>sys_we;
	cout<<"Podaj liczbe wejsciowa: ";
	cin>>liczba_we;
    cout<<"Podaj system wyjsciowy";
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
	liczba_10 = we[0]-48;
	if (liczba_we.length()>1)
    {
        for (i=1; i < liczba_we.length();i++)
        {
            liczba_10 = liczba_10 * sys_we + we[i]-48;
        }
    }
}

void dec_na_wyjsciowe() //algorytm Hornera
{
    j=0;
    L=liczba_10;
    do
    {
        c[j] = L % sys_wy;
        L = L / sys_wy;
        j++;
    }
    while( L != 0 );
    
}

void wynik() //pokazuje liczbe po cyfrah
{
    cout << "Liczba: ";
    for(int i = 100; i > 0;i--)
    {
        
        if(c[i-1]!=0 || pierwsza_cyfra==true)
        {
            cout<< c[i-1];
            pierwsza_cyfra = true;
        }
    }
    cout << endl;
}

int main()
{
    dane();
    string_na_tab();
	tab_na_10();
    dec_na_wyjsciowe();
    wynik();
}