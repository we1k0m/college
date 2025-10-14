#include <iostream>
using namespace std; 
int main() {
	int a;
	setlocale(0, "");
	cout << "Введите число: ";
	cin >> a;
	if (a =< 10 and a > 0){
		cout << "Цифра в дипазоне 0 - 10" << endl;

	}
	else if (a > 10 and a <= 20) {
		cout << "Цифра в дипазоне 11 - 20" << endl;

	}
	else if (a <= 30 and a > 20) {
		cout << "Цифра в дипазоне 21 - 30" << endl;

	}
	else if (a > 30 and a <= 40) {
		cout << "Цифра в дипазоне 31 - 40" << endl;

	}
	else if (a > 40 and a <= 50) {
		cout << "Цифра в дипазоне 41 - 50" << endl;

	}
	else if (a > 50 and a <= 60) {
		cout << "Цифра в дипазоне 51 - 60" << endl;

	}
	else if (a > 60 and a <= 70) {
		cout << "Цифра в дипазоне 61 - 70" << endl;

	}
	else if (a > 70 and a <= 80) {
		cout << "Цифра в дипазоне 71 - 80" << endl;

	}
	else if (a > 80 and a <= 90) {
		cout << "Цифра в дипазоне 81 - 90" << endl;

	}
	else if (a > 90 and a <= 100) {
		cout << "Цифра в дипазоне 91 - 100" << endl;

	}
	else if (a > 100) {
		cout << "Ошибка! Число больше 100." << endl;

	}
	else if (a < 0) {
		cout << "Ошибка! Число меньше 0." << endl;
	}
	return 0;
}
