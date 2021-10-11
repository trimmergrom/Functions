#include<iostream>
#include<Windows.h>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	
	int a, b;
	
	cout << "input 2 nambers"; cin >> a; cin >> b;
	cout << Add(a, b) << endl;
	cout << Sub(a, b) << endl;
	cout << Mul(a, b) << endl;
	cout << Div(a, b) << endl;

}
int Add(int a, int b)
{	
	return (a + b);
}
int Sub(int a, int b)
{
	return (a - b);
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}