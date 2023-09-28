#include <iostream>
#include <unistd.h>
#include <stdlib.h>

using namespace std;
int main()
{
    int a;
    cout<<"podaj pierwsza liczbe: ";
    cin>>a;
    cout<<endl;

    int b;
    cout<<"podaj druga liczbe: ";
    cin>>b;
    cout<<endl;

    cout<<"wynik odejmowania mniejszej od wiekszej to: ";

    if (a>b){
        cout<<a-b;
    }
    else{
        cout<<b-a;
    }

    return 0;
}
