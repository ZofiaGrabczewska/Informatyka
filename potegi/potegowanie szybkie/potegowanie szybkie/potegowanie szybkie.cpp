#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    int a; //podstawa
    int n; //wykladnik
    int w = 1; //wynik potegowania szybkiego

    cout << "Podaj podstawe: ";
    cin >> a;
 
    cout << "Podaj wykladnik: ";
    cin >> n;

    cout << a;
    cout << " do potegi ";
    cout << n;
    cout << " wynosi: ";

        while (n > 0) {
            if (n % 2 == 1) {
                w = w * a;
            }
            a = a * a;
            n = n / 2;
        }

        cout << w;
}

