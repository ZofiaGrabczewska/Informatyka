#include <iostream>

using namespace std;
int main()
{
    int n; //liczba naturalna
    int k = 2; //liczby pierwsze

    cout << "Podaj liczbe: ";
    cin >> n;

    cout << "Czynniki pierwsze: ";

    while (n > 1) {
        while (n % k == 0) {
            cout << k;
            cout << " ";
            n = n / k;
        }
        k = k + 1;
    }
}
