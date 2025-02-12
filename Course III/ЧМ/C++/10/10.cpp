#include <iostream>
#include <cmath>

using namespace std;

double SimpsonFunction(double x);
double MainSimpson(double a, double b, int n);

int main()
{
	setlocale(LC_ALL, "RUS");
	double y;
	double raz1, y1;
	cout << "Метод Симсона:\n";
	double a, b;
	double step;
	cout << "Нижний предел интегрирования  ";
	cin >> a;
	cout << "Высший предел интегрирования  ";
	cin >> b;
	cout << "Шаг ";
	cin >> step;

	y = MainSimpson(a, b, step);

	y1 = MainSimpson(a, b, step-1);
	raz1 = abs(y - y1);
	cout << "Ответ " << y << endl;
	cout << "Ошибка " << raz1 << endl;
	system("pause");
	return 0;
}

double SimpsonFunction(double x)
{
	return  pow((1 + x + x * x), 1 / 2) * (1 + x)*(1 + x);
}

double MainSimpson(double a, double b, int n)
{
	double h, s, x, f;
	int i = 1;
	h = (b - a) / n;
	x = a;
	f = SimpsonFunction(x);
	s = f;
	while (i <= n) {
		x = x + h;
		f = SimpsonFunction(x);
		s = s + 4 * f;
		i = i + 2;
		x = x + h;
		f = SimpsonFunction(x);
		s = s + 2 * f;
	}
	x = b;
	f = SimpsonFunction(x);
	s = (s + f) * (h / 3);
	return s;
}
