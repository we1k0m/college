#include <iostream>

using namespace std;


int main() {
	setlocale(0, "");
	int userNumber;
	int multiplier = 1;
	int userAnswer;

	cout << "Введите число для умножения: ";
	cin >> userNumber;

	while (multiplier <= 9) {
		cout << userNumber << " x " << multiplier << " = ? ";
		cin >> userAnswer;
		
		if (userAnswer == userNumber * multiplier) {
			cout << "Пример решен правильно!" << endl;
			multiplier++;
		}
		else {
			cout << "Ошибка, пример решен неверно!" << endl;
			return 0;
		}

	}

	cout << "Примеры решены, поздравляю!" << endl;
	return 0;
}
