#include <iostream>
using namespace std;

int x;
int srednia;
float sredniafloat;
int suma;
int maxi;
int mini;
int sumapi;

int func1() { //zadanie 1 z poprzedniego sprawozdania
	cout << "Podaj rok: " << endl; //uzytkownik podaje rok
	int rok;
	cin >> rok;


	if ((rok % 4 == 0) && (rok % 100 != 0) || (rok % 400 == 0)) { //sprawdzenie czy rok%4==0 i czy rok%100!=0 lub rok%400==0
		cout << "rok przestepny " << endl; //jesli tak
	}
	else {
		cout << "zwykly rok" << endl; //jesli nie
	}
	return 0;
}


int func2() { //zadanie 2 z poprzedniego sprawozdania
	int x;
	int y;

	cout << "1 liczba: ";
	cin >> x;
	cout << "2 liczba: ";
	cin >> y;

	if ((x - y) > 0) {
		swap(x, y);
	};
	cout << endl;

	cout << "inty przedzialu: ";
	int i = x + 1;
	for (i; i < y; i++) {
		cout << i << "; ";
	}
	// 2.1 ^

	cout << "\nsuma intow parzystych przedzialu: ";
	i = x + 1;
	for (i; i < y; i++) {
		if (!(i % 2)) {
			sumapi += i;
		}
	}
	cout << sumapi;
	//2.2 ^
	return 0;
}

int func3() { //zadanie 3 z poprzedniego sprawozdania
	int inp[5];
	int i = 0;
	int max;
	for (i; i < 5; i++) {
		cout << i + 1 << ". liczba: ";
		cin >> inp[i];
		if (i == 0) {
			mini = inp[i];
			maxi = inp[i];
		}
		else {
			if (inp[i] > maxi) {
				maxi = inp[i];
			}
			else if (inp[i] < mini) {
				mini = inp[i];
			}
		}
	}

	cout << "najw: " << maxi << " najmn: " << mini << endl;
	cout << "roznica: " << maxi - mini << endl;
	return 0;
}

int func4() { //zadanie 4 z poprzedniego sprawozdania
	cout << "Podaj liczbe liczb?" << endl;
	int n;
	cin >> n;
	int i;
	int* nowa = new int[n];

	for (i = 0; i < n; i++) {
		cout << "Podaj liczbe" << endl;
		cin >> nowa[i];
	}
	//cout << nowa[i] << endl;


	for (i = 0; i < n; i++) {
		suma += nowa[i];
	}

	sredniafloat = float(suma) / n;
	srednia = round(sredniafloat);
	cout << "srednia calkowita " << srednia << endl;
	cout << "srednia zmiennoprzecinkowa " << sredniafloat << endl;

	string zero_linia(srednia, '0');
	cout << (zero_linia) << endl;

	return 0;
}

int main() {


	for (;;) { //nieskonczona petla
		cout << "podaj liczbe 1-5(5 koniec): " << endl; //uzytkownik podaje rok
		cin >> x;
		switch (x) //switch casem user podaje zadanie
		{
		case 1:
			func1();
			break;
		case 2:
			func2();
			break;
		case 3:
			func3();
			break;
		case 4:
			func4();
			break;
		case 5: //5 przerywa petle
			return 0;
		}
	}
	

	

	return 0;
}