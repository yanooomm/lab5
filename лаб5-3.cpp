// Proc42 Напишите функцию вычисляющую косинус

#include <iostream>
#include <cmath>

using namespace std;

double cos1(double x, double eps)
{
	double value = 1, s = -x*x/2;
	int i = 2;
	while (abs(s) > eps)
	{
		value += s;
		s = s * (-1.0) * x * x / ((2 * i - 1) * (2 * i));
		i++;
	}
	return value;
}

int main()
{
	double x1, eps;
	cin >> x1 >> eps;
	cout << cos1(x1, eps);
}
