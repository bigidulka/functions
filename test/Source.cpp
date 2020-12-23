#include<iostream>
using namespace std; 

void main()
{
	setlocale(0, "Russian");
	int t;
	cout << "Температура воздуха: "; cin >> t;

	//if (t > 0)
	//{
	//	t = 5;
	//}
	//else
	//{
	//	t = -5;
	//}
	//cout << t;
	t > 0 ? t=5 : t=-5; cout << t;
}