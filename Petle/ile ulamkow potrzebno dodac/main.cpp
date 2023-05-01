#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	double p = 1, k = 10, suma = 0, i = 1;
	cout << "Ten program liczy Ile ulamkow nalezy dodac, aby ich suma byla wieksza od 10?" << endl;
	
	while(suma < 10)
	{
		suma = suma + (1 / p);
		p++;
		i++;
	}
	
	cout << i - 1 << endl;
	
	return 0;
}
