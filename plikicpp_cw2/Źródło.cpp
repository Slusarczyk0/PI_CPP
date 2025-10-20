#include <iostream>
using namespace std;

int maxi;
int mini;
int sumapi;

void main() {
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

    cout << endl << endl << "zad 4\n\n";

    int inp[5];
    i = 0;
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
};