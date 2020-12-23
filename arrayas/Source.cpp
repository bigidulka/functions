#include<iostream>
#include<ctime>
using namespace std;
#define DEBUG
//1d
const int ROWS = 8;
const int COLS = 7;
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Avg(int arr[], const int n);
double Avg(double arr[], const int n);
int minValue(int arr[], const int n);
double minValue(double arr[], const int n);
int maxValue(int arr[], const int n);
double maxValue(double arr[], const int n);
//2d
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);

void main()
{
	setlocale(0, "");
	srand(time(NULL));
	const int n = 10;

	int i_arr[n];
	FillRand(i_arr, n);
	Print(i_arr, n);
	cout << "Сортировка..." << endl;
	Sort(i_arr, n);
	Print(i_arr, n);
	cout << "Сумма: " << Sum(i_arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(i_arr, n) << endl;
	cout << "Минимальное значение: " << minValue(i_arr, n) << endl;
	cout << "Максимальное значение: " << maxValue(i_arr, n) << endl << endl;

	double d_brr[n];
	FillRand(d_brr, n);
	Print(d_brr, n);
	cout << "Сортировка..." << endl;
	Sort(d_brr, n);
	Print(d_brr, n); 
	cout << "Сумма: " << Sum(d_brr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(d_brr, n) << endl;
	cout << "Минимальное значение: " << minValue(d_brr, n) << endl;
	cout << "Максимальное значение: " << maxValue(d_brr, n) << endl << endl;

	/*int crr[n]; 
	FillRand(crr, n);
	Print(crr, n);
	Sort(crr, n);
	Print(crr, n);
	cout << endl;*/

	int i_arr2[ROWS][COLS];
	FillRand(i_arr2, ROWS, COLS);	
	Print(i_arr2, ROWS, COLS);	
	Sort(i_arr2, ROWS, COLS);
	cout << "Сортировка..." << endl;
	Print(i_arr2, ROWS, COLS);
}	

//1d
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
int Avg(int arr[], const int n)
{
	double avg = 0;
	avg = (Sum(arr, n)) / n;
	return avg;
}
double Avg(double arr[], const int n) 
{
	double avg = 0;
	avg = (Sum(arr,n)) / n;
	return avg;
}
int minValue(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
double minValue(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int maxValue(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
double maxValue(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
//2d
void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
	cout << endl;
	}
}
void Sort(int arr[ROWS][COLS], const int m, const int n)
{
#ifdef DEBUG
	int iter = 0;
	int exch = 0;
#endif // DEBUG
	for (int i = 0; i < m; i++)
	{ 
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
			{
				/*int l;
				if (k == i)l = j + 1;
				else l = 0;*/
				for (int l = (k == i) ? j + 1 : 0; l < n; l++)
				{
#ifdef DEBUG
					iter++;
#endif // DEBUG
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
#ifdef DEBUG
						exch++;
#endif // DEBUG
					}
				}
			}
		}
	}
#ifdef DEBUG
	cout << "Итераций: " <<iter << endl << "Обмен элемнтов: " << exch << endl;
#endif // DEBUG
}	