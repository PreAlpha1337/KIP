#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>

using namespace std;

class MethodOfMiddleRectangles
{
	double F(double x) { return (x*x*x)/((1+x)*(1+x)); }
	double methodOfMiddleRectangles(double a, int n, double h)
	{
		double s = 0;
		for (int i = 0; i < n; i++) s += F(a + i * h + h / 2) * h;
		return s;
	}
public:
	void calculate() {
		int n;
		double a, b, h;
		cout << "Численное интегрирование\n\nИнтервал от "; cin >> a;
		system("cls");
		cout << "Численное интегрирование\n\nИнтервал от " << a << " до "; cin >> b;
		cout << "Шагов "; cin >> n;
		cout << endl;
		h = (b - a) / n;
		cout << "Метод средних прямоугольников: " << methodOfMiddleRectangles(a, n, h) << endl;
		cout << endl;
	}
};

int main()
{
	setlocale(0, "");
	MethodOfMiddleRectangles Middle_Rec;
	system("cls");
	Middle_Rec.calculate();
	system("pause");
	system("cls");
	return 0;
}
