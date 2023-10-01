#include <iostream>
#include <unistd.h>
#include <stdlib.h>

using namespace std;
int main()
{
    int szukana;

    //                  0  1  2  3   4   5  6    7   8   9  10  11  12  13  14
    int tablica[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

    int lewa = 0; //indeks lewego konca tablicy
    int prawa = 15; //indeks prawego konca tablicy
    int srodek = (lewa + prawa)/2; //indeks srodkowego elementu tablicy

    cout << "Podaj liczbe z tablicy, a ja podam jaki jest jej indeks.";
    cout << endl;
    cout << "Liczby znajdujace sie w tablicy to: ";

    for (int i = 0; i < 15; i++){ //wyswietlanie elementow tablicy
        cout << tablica[i];
        if (i < 14){
            cout << ", "; //to dla estetyki dodalam przecinki i spacje pomiedzy elementami tablicy
        }
    }

    cout << endl;
    cout << "Podaj liczbe: ";
    cin >> szukana;
    cout << endl;

    while (lewa <= prawa){ //dopoki lewa jest mniejsza niz prawa lub sa sobie rowne program sie wykonuje
        if (tablica[srodek] == szukana){
            cout << "Indeks szukanej liczby to: ";
            cout << srodek;
            break; //zakancza dzialanie tej petli, bez tego powtarzalo caly czas w kolko odpowiedz
        }
        else if (tablica[srodek] > szukana){
            prawa = srodek - 1;
        }
        else{
            lewa = srodek + 1;
        }
        srodek = (lewa + prawa)/2;
    }

    return 0;
}
