#include <iostream>
using namespace std;

int main() {



	cout << "Podaj rok: " << endl; //uzytkownik podaje rok
	int rok;
	cin >> rok;


	if ((rok%4 == 0) && (rok%100 != 0)||(rok%400==0)) { //sprawdzenie czy rok%4==0 i czy rok%100!=0 lub rok%400==0
		cout << "rok przestepny " << endl; //jesli tak
	}
	else {
		cout << "zwykly rok" << endl; //jesli nie
	}

	return 0;
}