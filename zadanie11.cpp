#include <iostream>
using namespace std;

int main() {



	cout << "Podaj rok: " << endl;
	int rok;
	cin >> rok;
	int rok_urodzenia;
	cout << "podaj rok urodzenia" << endl;
	cin >> rok_urodzenia;
	int wiek = rok - rok_urodzenia;

	cout << "wiek to: " << wiek << endl;

	if (wiek < 18) {
		cout << "brak dost�pu " << endl;
	}
	else {
	cout << "dost�p przyznany" << endl;
}

	return 0;
}