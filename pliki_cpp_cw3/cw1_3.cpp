#include <iostream>
using namespace std;

void nogi(int fr[3]) {
	int sum = fr[0] * 2 + fr[1] * 4 + fr[2] * 4; //suma nog zwierzat
	cout << "w sumie: " << sum << " nog" << endl;
}

signed int xy[2] = { 0, 0 }; //przypisanie signed tablicy calkowitej by zachowala wartosc
void robot(int k) {
	static int i = 0; 
	switch (i){
	case 0:
		xy[1] = xy[1] + k;
		break;
	case 1:
		xy[0] = xy[0] + k;
		break;
	case 2:
		xy[1] = xy[1] - k;
		break;
	case 3:
		xy[0] = xy[0] - k;
		break;
	default:
		break;
	}
	i++;
}

int main(void) {
	cout << "zad 1" << endl;

	int farma[3];
	cout << "wprowadz liczbe kur" << endl;
	cin >> farma[0];
	cout << "wprowadz liczbe krow" << endl;
	cin >> farma[1];
	cout << "wprowadz liczbe swin" << endl;
	cin >> farma[2];
	nogi(farma);

	cout << "zad 2" << endl;

	for (int i = 0; i < 4; i++) {
		int k;
		cout << "wprowad liczbe krokow" << endl;
		cin >> k;
		robot(k);
	}
	cout << "robot znajduje sie na pozycji: " << xy[0] << " x; " << xy[1] << " y.";

}