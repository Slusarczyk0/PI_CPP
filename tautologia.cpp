#include <iostream>
using namespace std;
//7 20 33
bool p;
bool q;
void negacja(bool r, bool s) {
	r = !r;
	s = !s;
	cout << "~p = " << r << endl;
	cout << "~q = " << s << endl;
}

void koniunkcja(bool r, bool s) {
	if (r == s == 1) {
		cout << "p ^ q = 1" << endl;
	}
	else {
		cout << "p ^ q = 0" << endl;
	}
}

void alternatywa(bool r, bool s) {
	if (r || s == 1) {
		cout << "p V q = 1" << endl;
	}
	else {
		cout << "p V q = 0" << endl;
	}
}

void implikacja(bool r, bool s) {
	if (r ==1 && s == 0) {
		cout << "p -> q = 0" << endl;
	}
	else {
		cout << "p -> q = 1" << endl;
	}
}

void rownowaznosc(bool r, bool s) {
	if (r == s) {
		cout << "p <-> q = 1" << endl;
	}
	else {
		cout << "p <-> q = 0" << endl;
	}
}

void main() {
	cout << "Zadanie 1" << endl;
	cout << "Podaj p (0 lub 1)" << endl;
	cin >> p;
	
	cout << "Podaj q (0 lub 1)" << endl;
	cin >> q;

	negacja(p, q);
	koniunkcja(p, q);
	alternatywa(p, q);
	implikacja(p, q);
	rownowaznosc(p, q);

	cout << "Zadanie 2" << endl;



}