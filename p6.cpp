#include <iostream>

using namespace std;


int main() {
	int m;
	setlocale(0, "");
	cout << "[+] Месяц года" << endl;
	cout << "[1] Янаварь" << endl;
	cout << "[2] Февраль" << endl;
	cout << "[3] Март" << endl;
	cout << "[4] Апрель" << endl;
	cout << "[5] Май" << endl;
	cout << "[6] Июнь" << endl;
	cout << "[7] Июль" << endl;
	cout << "[8] Август" << endl;
	cout << "[9] Сентябрь" << endl;
	cout << "[10] Октябрь" << endl;
	cout << "[11] Ноябрь" << endl;
	cout << "[12] Декабрь" << endl;
	cout<<endl;
	cout << "[] Выберите месяц";
	cin >> m;

	switch (m) {
	case 1:
		cout << "Выбран месяц Январь" << endl;
		break;
	case 2:
		cout << "Выбран месяц Февраль" << endl;
		break;
	case 3:
		cout << "Выбран месяц Март" << endl;
		break;
	case 4:
		cout << "Выбран месяц Апрель" << endl;
		break;
	case 5:
		cout << "Выбран месяц Май" << endl;
		break;
	case 6:
		cout << "Выбран месяц Июнь" << endl;
		break;
	case 7:
		cout << "Выбран месяц Июль" << endl;
		break;
	case 8:
		cout << "Выбран месяц Август" << endl;
		break;
	case 9:
		cout << "Выбран месяц Сентябрь" << endl;
		break;
	case 10:
		cout << "Выбран месяц Октябрь" << endl;
		break;
	case 11:
		cout << "Выбран месяц Ноябрь" << endl;
		break;
	case 12:
		cout << "Выбран месяц Декабрь" << endl;
		break;
	default: 
		cout << "Такого месяца не существует";
		break;
	}
	return 0;
}
