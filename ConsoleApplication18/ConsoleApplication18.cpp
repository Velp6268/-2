#include <iostream>
#include <cmath>
using namespace std;



int main() {

	setlocale(LC_ALL, "Russian");

	double result, koof_a0, koof_x;
	const double E = 0.0000005;
	int length;

	cout << "Введите длинну: ";
	cin >> length;

	cout << "Введите a0: ";
	cin >> koof_a0;
	cout << "Введите x (x>1): ";
	cin >> koof_x;
	if (koof_x < 1)
	{
		cout << "Введите x (x>1): ";
		cin >> koof_x;
	}
	else
	{
	}

	for (int i = 1; i <= length; i++)
	{
		result = powl(sinl(5 + powl(i - 1, 3) / powl(koof_x, i) + 4), -1);

	}



	while (int i = length)
	{
		result = powl(sinl(5 + powl(i - 1, 3) / powl(koof_x, i) + 4), -1);
		cout << "Предел последовательности: " << result;
		break;
	}


}