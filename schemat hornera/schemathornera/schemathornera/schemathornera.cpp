#include <iostream>
using namespace std;

int sch_hornera(int w[],int s, int a);

int main()
{
    int *wspolczynnik; // wskaznik wspolczynnika
    int stopien;
    int argument;

    cout << "podaj stopien wielomianu: ";
    cin >> stopien;

    wspolczynnik = new int[stopien + 1];

    for (int i = 0; i <= stopien; i++) {
        cout << "podaj wspolczynnik stojacy przy potedze ";
        cout << stopien - i;
        cout << " : ";

        cin >> wspolczynnik[i];
    }

    cout << "podaj argument: ";
    cin >> argument;

    cout << "W(";
    cout << argument;
    cout << ") = ";
    cout << sch_hornera(wspolczynnik, stopien, argument);

    delete[] wspolczynnik;
}

int sch_hornera(int w[], int s, int a) 
{
    // w - wspolczynnik
    // s - stopien
    // a - argument
    if (s == 0) {
        return w[0];
    }

    return a * sch_hornera(w, s - 1, a) + w[s];
}