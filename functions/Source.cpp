#include<iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mule(int a, int b);
double my_div(double a, double b);
int power(int a, int b);	

void main()
{
	setlocale(0, "");
	int a, b;
	cout << "¬ведите два числа:" << endl; cin >> a >> b;
	int c = add(a, b);
	cout << c << endl;
	cout << sub(a, b) << endl;
	cout << mule(a, b) << endl;
	cout << my_div(a, b) << endl;
	cout << power(2, 3) << endl;
}
int add(int a, int b)
{
	int sum = a + b;
	return sum;
}
int sub(int a, int b)
{
	return a - b;
}
int mule(int a, int b)
{
	return a * b;
}
double my_div(double a, double b)
{
	return a / b;
}
int power(int a, int n)
{
	int N = 1;
	for (int i = 0; i < n; i++) N *= a;
	return N;
}