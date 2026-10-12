#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double xstart, xstop, step, accuracy;
	cout << "Введите начальный x = ";
	cin >> xstart;
	cout << "\nВведите конечный x = ";
	cin >> xstop;
	cout << "\nВведите шаг h = ";
	cin >> step;
	cout << "\nВведите точность E = ";
	cin >> accuracy;
	cout << left << setw(20) << "Аргумент"
		 << setw(35) << "Значение функции"
		 << setw(20) << "Элементов ряда" <<setw(20)<<" Встроенный арксинус"<< endl;

	for (double x = xstart; x <= xstop; x += step)
	{
		double term = x;
		double sum = x;
		int n = 1;

		if (abs(x) < 1e-12)
		{ // чтобы убрать погрешность нуля
			x = 0.0;
		}
		while (abs(term) > accuracy)
		{
			term = term * (x * x * (2 * n - 1) * (2 * n - 1)) / ((2 * n) * (2 * n + 1));
			sum += term;
			n++;
		}
		cout << fixed << setprecision(6);
		cout << left << setw(15) << x
			 << setw(22) << sum
			 << setw(15) << n << setw(20)<<asinf(x)<<endl;
	}
}