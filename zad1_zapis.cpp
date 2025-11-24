#include <iostream>
#include <fstream>
#include <Windows.h>
#include <iomanip> 
using namespace std;


int main() {
    int n, i, j; 
    int** A; 

    cout << "Podaj rozmiar: " << endl;
    cin >> n;
    n++;
    
    fstream zapis;
    zapis.open("tabliczka.txt", ios::out );
    zapis.close();
    zapis.open("tabliczka.txt", ios::out | ios::app);
    A = new int* [n];

    for (i = 0; i < n; i++)
        A[i] = new int[n]; 

    for (i = 1; i < n; i++) {
        for (j = 1; j < n; j++) {
            A[i][j] = i * j;
            zapis <<setw(5) << (i * j) ;
        }
        zapis << endl;
    }

    cout << "   ";
    //for (i = 1; i < n; i++)
        //cout << setw(5) << i;
    

    cout << endl << endl;
    
    for (i = 1; i < n; i++)
    {
        //cout << setw(5) << i;
        
        for (j = 1; j < n; j++)
            cout << setw(5) << (int)A[i][j];
       
        
        cout << endl;
    }
    zapis.close();


	return 0;
}