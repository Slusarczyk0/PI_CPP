#include <iostream>
using namespace std;

int main() {



	cout << "Podaj liczbe (1-7): " << endl; //uzytkownik podaje liczbe 1-7
	int dtyg;
	cin >> dtyg;


	switch (dtyg)
	{
	case 1: //case: podana liczba
		cout << "Poniedzialek" << endl; //wynik jesli ta liczba byla podana
		break; //koniec case'a
	case 2:
		cout << "Wtorek" << endl; //i to samo az do 7
		break;
	case 3:
		cout << "Sroda" << endl;
		break;
	case 4:
		cout << "Czwartek" << endl;
		break;
	case 5:
		cout << "Piatek" << endl;
		break;
	case 6:
		cout << "Sobota" << endl;
		break;
	case 7:
		cout << "Niedziela" << endl;
		break;
	default: //jesli poza "case'ami" (liczba z poza zakresu 1-7)
		cout << "zla liczba" << endl; // wynik
		break;
	}

	return 0;
}