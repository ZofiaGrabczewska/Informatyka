#include <iostream>

using namespace std;

long long fibonacci(int n);

int main() {
    int n; //w rekurencyjnym
    int m; //w iteracyjnym

    cout << "REKURENCYJNIE" << endl << "Podaj numer wyrazu ci¹gu: ";
    cin >> n;

    cout << fibonacci(n);

    cout<<endl<<"ITERACYJNIE"<<endl<<"Ile wyrazow ciagu wypisac: ";
    cin >> m;

    long long f;
    long long f0=0;
    long long f1=1;

    for(int i = 0; i <= m; i++ ){
        if( i > 1 )
        {
            f  = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        else f = i;
        cout << f << " ";
    }

    return 0;
}

long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
