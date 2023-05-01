#include <iostream>
#include <math.h>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Praca Nazwisko_8na16.cpp na moja poczte

int main(int argc, char** argv) 
{
	string tablica_16[16];
	string tablica_8[8];
	int liczba;
	int a1, a2, a3, a4;
	string binarna_liczba, b1, b2, b3, b4;
	string c1, c2, c3;
	string number_16;
	int n1,n2,n3;
	for(int i = 0; i < 16; i ++) 
	{
		tablica_16[i] = "";
	} 
	for(int i = 0; i < 8; i ++) 
	{
		tablica_8[i] = "";
	} 
	
	tablica_16[0] = "0000";
	tablica_16[1] = "0001";
	tablica_16[2] = "0010";
	tablica_16[3] = "0011";
	tablica_16[4] = "0100";
	tablica_16[5] = "0101";
	tablica_16[6] = "0110";
	tablica_16[7] = "0111";
	tablica_16[8] = "1000";
	tablica_16[9] = "1001";
	tablica_16[10] = "1010";
	tablica_16[11] = "1011";
	tablica_16[12] = "1100";
	tablica_16[13] = "1101";
	tablica_16[14] = "1110";
	tablica_16[15] = "1111";
	
	tablica_8[0] = "000";
	tablica_8[1] = "001";
	tablica_8[2] = "010";
	tablica_8[3] = "011";
	tablica_8[4] = "100";
	tablica_8[5] = "101";
	tablica_8[6] = "110";
	tablica_8[7] = "111";
	
	do
	{
		cout << "Podaj liczbe 8-kowa" << endl;
		cin >> liczba;

		if(liczba <= 777)
		{
			if(liczba >=100) //wydobycie z liczby setek
			{
				a1 = floor(liczba/100);
				a2 = floor((liczba - (a1*100)) /10);
				a3 = floor((liczba - (a1*100) - (a2*10)));
			}
			else if (liczba >=10) //dziesziatek
			{
				a1=0;
				a2 = floor(liczba/10);
				a3 = floor((liczba - (a2*10)));
			}
			else if(liczba >= 0) //jedynek
			{
				a1=0;
				a2=0;
				a3 = liczba;
			}
		} 
	}while(liczba<0);
	
	//oct-bin
	b1=tablica_8[a1];
	b2=tablica_8[a2];
	b3=tablica_8[a3];
	
	c3 = b2[2] + b3;  //czarna magia przetwarzania 3 tablic 3-znakowych w 3 4-znakowe
	c2 += b1[1];
	c2 += b1[2];
	c2 += b2[0];
	c2 += b2[1];
	c1 = b1[0];
	
	if(c1=="1") 
	{
		number_16 = "1";
	}
	else
	{
		number_16 ="0";
	}
	
	for(int i = 0; i < 16; i++)
	{
		if(c2 == tablica_16[i])
		{
			n2=i;
		}
		if(c3 == tablica_16[i])
		{
			n3=i;
		}
	}
	
	switch(n2)
	{
		case 0: number_16+="0"; break;
		case 1: number_16+="1"; break;
		case 2: number_16+="2"; break;
		case 3: number_16+="3"; break;
		case 4: number_16+="4"; break;
		case 5: number_16+="5"; break;
		case 6: number_16+="6"; break;
		case 7: number_16+="7"; break;
		case 8: number_16+="8"; break;
		case 9: number_16+="9"; break;
		case 10: number_16+="A"; break;
		case 11: number_16+="B"; break;
		case 12: number_16+="C"; break;
		case 13: number_16+="D"; break;
		case 14: number_16+="E"; break;
		case 15: number_16+="F"; break;
	}
	
	switch(n3)
	{
		case 0: number_16+="0"; break;
		case 1: number_16+="1"; break;
		case 2: number_16+="2"; break;
		case 3: number_16+="3"; break;
		case 4: number_16+="4"; break;
		case 5: number_16+="5"; break;
		case 6: number_16+="6"; break;
		case 7: number_16+="7"; break;
		case 8: number_16+="8"; break;
		case 9: number_16+="9"; break;
		case 10: number_16+="A"; break;
		case 11: number_16+="B"; break;
		case 12: number_16+="C"; break;
		case 13: number_16+="D"; break;
		case 14: number_16+="E"; break;
		case 15: number_16+="F"; break;
	}
	
	/*
	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;
	*/
	cout << number_16 << endl;
	
	return 0;
}
