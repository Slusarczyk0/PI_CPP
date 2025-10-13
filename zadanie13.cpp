#include <iostream>
using namespace std;

int main() {

	cout << "podaj ponizsze dane" << endl;

	cout << "podaj imie: " << endl;
	std::string name;
	cin >> name;

	cout << "podaj nazwisko " << endl;
	std::string surname;
	cin >> surname;

	cout << "firma: " << endl;
	std::string company;
	cin >> company;

	cout << "pozycja: " << endl;
	std::string position;
	cin >> position;

	cout << "nr telefonu: " << endl;
	std::string phone;
	cin >> phone;

	cout << "mail: " << endl;
	std::string mail;
	cin >> mail;
	

	cout << "**********************" << endl;
	cout <<"* " << name << surname << endl;
	cout << "* "<< company << position << endl;
	cout << "* " << phone << mail << endl;
	cout << "**********************" << endl;


	return 0;
}