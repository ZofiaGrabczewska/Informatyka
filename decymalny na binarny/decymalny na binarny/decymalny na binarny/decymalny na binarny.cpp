#include <iostream>
using namespace std;

//int zamiana(int liczba);

int main() 
{
	int liczba; //liczba dziesietna
	cout << "Podaj liczbe dziesietna: ";
	cin >> liczba;
	cout << "Liczba ";
	cout << liczba;
	cout << " po zmianie na postac binarna to: ";

	int tab[15];

	for (int i = 0; liczba != 0; i++) {
		tab[i++] = liczba % 2;
		liczba = liczba / 2;

		int j = i - 1;
		while (j >= 0) {
			cout << tab[j];
			break;
		}
	}

}
