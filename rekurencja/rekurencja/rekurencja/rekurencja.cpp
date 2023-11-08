#include <iostream>
using namespace std;

long long silnia(int n);

int main()
{
	int n;
	cout << "podaj liczbe: ";
	cin >> n;
	cout << endl;
	cout << n << "! = " << silnia(n) << endl;

}

long long silnia(int n) {
	if (n == 1)
		return 1;

	return n * silnia(n - 1);
}