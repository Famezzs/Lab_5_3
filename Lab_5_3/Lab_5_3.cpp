// Lab_5_3.cpp
// Козубенко Андрій
// Лабораторна робота № 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями.
// Варіант 10
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double y(const double x);

int main()
{
	double fp, fk;
	double z; // результат обчислень виразу
	int n;

	cout << "fp = "; cin >> fp;
	cout << "fk = "; cin >> fk;
	cout << "n = "; cin >> n;

	cout << fixed;
	cout << "---------------------------------" << endl;
	cout << "|" << setw(15) << "       f       " << "|" << setw(15) << "       z       " << "|" << endl;
	cout << "---------------------------------" << endl;

	double df = (fk - fp) / n;

	for (double f = fp; f <= fk; f += df)
	{
		z = y(f / 2.) + y(f + 1) * y(f + 1) + y(2. * f);

		cout << fixed;
		cout << "|" << setw(15) << right << setprecision(4) << f << "|" << setw(15) << right << setprecision(4) << z << "|" << endl;
	}
	cout << "---------------------------------";

	return 0;
}

double y(const double x)
{
	if (abs(x) >= 1)
		return exp(x) / (1 + exp(x) + sin(x));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do {
			j++;
			double R = (-1.) * x * x / (4. * j * j - 2. * j);
			a *= R;
			S += a;
		} while (j < 8);

		return S;
	}
}