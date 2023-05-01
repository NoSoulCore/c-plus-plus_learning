#include <iostream>
#include <string>
using namespace std; // korpus piramidky

int main()
{
	int star,space,num,v;
	
	cout << "Give me Number: ";
	cin >> num;
	
	space = num;
	v = 0;
	
	for(int i = 0; i < num; i++)
	{
		for(float sp1 = i + space; sp1 > 0; sp1--) //showing spaces
		{
			cout << " ";
		}
		cout << "*";
		
		for(int nv = 0; nv < v; nv++) //showing void
		{
			cout << " ";
		}
		cout << "*";
		cout<<endl;
		v = v + 2;
		space = space - 2;
	}
	for (int i = 0; i < num * 2 + 2; i++)
	{
		cout << "*";
	}
	return 0;
}
