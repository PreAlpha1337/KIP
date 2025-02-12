#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
void derivative1(double *&y, double h) {
	double f[4];
	f[0] = (1 / (6 * h)) * (-11 * y[0] + 18 * y[1] - 9 * y[2] + 2 * y[3]) - (h * h * h / 4);
	f[1] = (1 / (6 * h)) * (-2 * y[0] - 3 * y[1] + 6 * y[2] - y[3]) + (h * h * h / 12);
	f[2] = (1 / (6 * h)) * (y[0] - 6 * y[1] + 3 * y[2] + 2 * y[3]) - (h * h * h / 12);
	f[3] = (1 / (6 * h)) * (-2 * y[0] + 9 * y[1] - 18 * y[2] + 11 * y[3]) + (h * h * h / 4);
	y = f;
}

double F(double x) { return  log(x)*(1 + x)*(1 + x);}
double	MethodOfTrapezium(double a, int n, double h)//методТрапеций
{
	double s = 0;
	double *deva, *devb;
	deva = devb = new double[4];
	s += F(a) / 2 * h;
	for (int i = 1; i < n; i++) s += F(a + i * h) * h;
	s += F(a + n * h) / 2 * h;
	for (int i = 0; i < 4; i++) // заполняем точки для производной
		deva[i] = F(a + i * h / 2);
	for (int i = 3; i >= 0; i--)
		devb[i] = F(a + n * h - i * h / 2);
	derivative1(deva, h / 2);
	derivative1(devb, h / 2);
	cout << "Погрешность метода трапеций = " << -h * h * h / 12 << " * " << (devb[3] - deva[0]) << endl;
	return s;
}

int main(int argc, char ** argv)
{
	char c;
	double a, b;
	double step;
	setlocale(LC_ALL, "rus");
	cout << "Нижний предел интегрирования  ";
	cin >> a;
	cout << "Высший предел интегрирования  ";
	cin >> b;
	cout << "Шаг ";
	cin >> step;
	double h = (b - a) / step;
	double trap = MethodOfTrapezium(a, step, h);
	
	cout << "Ответ " << trap << endl;
	
	system("pause");
}
