#include <iostream>
#include <cmath>
using namespace std;

int srednia;
float sredniafloat;
int suma;

int main() {

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
