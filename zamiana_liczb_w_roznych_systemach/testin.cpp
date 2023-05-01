#include <iostream>
#include <string>

using namespace std;

int a[100];
int j = 0;
int liczba_we,liczba_wy;
int b1,b2;

int dec_na_hex(int temp)
{
    if((temp/16)>1)
    {
        a[j] = temp % 16;
        b1 = temp - a[j];

    }
    else
    {
        return 1;
    }
    
}

char f = 51;
int g = 5;

int main()
{
    cout << f << endl;
    cout << g << endl;
    g = f;
    cout << g << endl;

    //cout << liczba_wy << endl;
}