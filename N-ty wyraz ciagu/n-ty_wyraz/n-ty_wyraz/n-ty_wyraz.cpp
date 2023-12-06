#include <iostream>
using namespace std;

double funkcja(int n);

int main()
{
    int n; //nr z ciagu

    cout << "podaj numer wyrazu z ciagu: ";
    cin >> n;
    cout << endl << n << " wyraz ciagu ma wartosc: " << funkcja(n);

}

double funkcja(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 0.5;
    }
    return funkcja(n - 1) * funkcja(n - 2);
}