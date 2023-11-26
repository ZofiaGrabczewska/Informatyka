#include <iostream>

using namespace std;

int main()
{
    int liczba; //liczba dziesietna
    int tab[15];
    int i = 0;
    
    cout << "Podaj liczbe dziesietna: ";
    cin >> liczba;


    cout << "Liczba ";
    cout << liczba;
    cout << " binarnie to: ";
    
    while (liczba != 0){
        tab[i++] = liczba % 2;
        liczba = liczba /2;
    }
    
    for (int j = i-1; j>=0; j--){
        cout << tab[j];
    }

    return 0;
}