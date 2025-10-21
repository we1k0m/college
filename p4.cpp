#include <iostream>
using namespace std;
void main() {
	setlocale(0, "");
	int a;
	float b;
	float c;
	cout << "\x1b[92m1) складывать			|     + \x1b[92m" << endl << "2) вычитать			|     -\x1b[92m" << endl << "3) умножать			|     *\x1b[92m" << endl << "4) делить			|     /\x1b[92m" << endl << "5) деление от остатка 		|     %\x1b[92m" << endl;
	cin >> a;
	if (a == 1) {
		cin >> b;
		cin >> c;
		cout << "Результат: " << b << " + " << c << " = " << b + c;


	}
	else if (a == 2) {
		cin >> b;
		cin >> c;
		cout << "Результат: " << b << " - " << c << " = " << b - c;


	}
	else if (a == 3) {
		cin >> b;
		cin >> c;
		cout << "Результат: " << b << " * " << c << " = " << b * c;


	}
	else if (a == 4) {
		cin >> b;
		cin >> c;
		if (c == 0) {
			cout << "Ошибка! На ноль делить нельзя! Введите число заново: ";
			cin >> c;
		}
		cout << "Результат: " << b << " / " << c << " = " << b / c;


	}
	else if (a == 5) {
		int d;
		int r;
		cin >> d;
		cin >> r;
		if (r == 0) {
			cout << "Ошибка! На ноль делить нельзя! Введите число заново: ";
			cin >> r;
		}
		cout << "Результат: " << d << " % " << r << " = " << d % r;
	}
}
