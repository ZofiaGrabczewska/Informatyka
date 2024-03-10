#include<iostream>
#include<iomanip>
using namespace std;

double funkcja_f(double x);

double f_obl(int a, int b, int n);

int main()
{
  int a;
  int b;
  int n;
  cout<<"a = ";
  cin>>a;
  cout<<"b = ";
  cin>>b;
  cout<<"Podaj liczbe trapezow: ";
  cin>>n;
  cout<<"Pole figury wynosi: "<<fixed<<setprecision(2)<<f_obl(a, b, n);

  return 0;
}

double funkcja_f(double x)
{
    return x*x+x+2;
}

double f_obl(int a, int b, int n)
{
  double x = (b-a)/(double)n;
  double S = 0.0; //suma pol trapezow
  double srodek = a+(b-a)/(2.0*n);

  for(int i=0;i<n;i++)
  {
      S+=funkcja_f(srodek);
      srodek+=x;
  }
  return S*x;
}
