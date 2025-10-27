#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int random_nr;
int score_pc;
int score_user;


int kpn() {

	srand(time(NULL));
	int random_nr = (rand() % 3) + 1; //komputer losuje z zasiegu 1-3
	//cout << random_nr << endl;
	
	cout << "podaj 1-3(kpn)" << endl; // user podaje z zasiegu 1-3
	int user;
	cin >> user;
	cout << "komputer wylosowal: " << random_nr << endl; //liczba ktora wylosowal komputer
	if(user == random_nr){ //remis
		cout << "remis" << endl;
	}
	else if (user == 1 && random_nr==2) { //user kamien
		cout << "przergrywasz k vs p" << endl;
		score_pc++;
	}
	else if (user == 1 && random_nr == 3) {
		cout << "wygrywasz k vs n" << endl;
		score_user++;
	}
	else if (user == 2 && random_nr == 1) { //user papier
		cout << "wygrywasz p vs k" << endl;
		score_user++;
	}
	else if (user == 2 && random_nr == 3) {
		cout << "przegrywasz p vs n" << endl;
		score_pc++;
	}
	else if (user == 3 && random_nr == 1) { //user nozyczki
		cout << "przergrywasz n vs k" << endl;
		score_pc++;
	}
	else if (user == 3 && random_nr == 2) {
		cout << "wygrywasz n vs p" << endl;
		score_user++;
	}

	return 0;
}

int main() {

	for (int i = 0; i < 3; i++) {
		kpn(); //wywolanie funkcji
	}
	cout << "score_user: " << score_user << " score_pc: " << score_pc << endl;
	return 0;
}