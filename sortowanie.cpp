#include <iostream>
using namespace std;

int main() {
    int tab[10] = {5, 8, 12, 7, 32, 40, 18, 3, 22, 35};
    int n = 10;

    cout << "tablica przed posortowaniem: ";
    for(int i = 0; i < n; i++) {
        cout << tab[i];
        if(i < n - 1) cout << ", ";
    }
    cout << endl;

    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n - i; j++) { 
            if(tab[j-1] > tab[j]) { 
                int temp = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = temp;
            }
        }
    }

    cout << "tablica po posortowaniu: ";
    for(int i = 0; i < n; i++) {
        cout << tab[i];
        if(i < n - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
