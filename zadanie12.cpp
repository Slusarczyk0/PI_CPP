#include <iostream>
using namespace std;

int main() {



	cout << "utworz haslo: " << endl;
	std::string password;
	cin >> password;
	std::string password_repeat;
	cout << "podaj utworzone haslo: " << endl;
	cin >> password_repeat;

	if (password == password_repeat) {
		cout << "dostep przyznany " << endl;
	}
	else {
		cout << "brak dostepu" << endl;
	}

	return 0;
}