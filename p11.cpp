#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 0;
    char c;
    int d;
    int e;
    setlocale(0, "");
    cout << "[ + ] Программа - “Геометрические фигуры”" << endl;
    cout << "[ 1 ] Линия" << endl;
    cout << "[ + ] Выберите фигуру: " << endl;
    cin >> d;
    switch (d) {
    case 1:
    {
        cout << "[ + ] Фигура: “Линия” " << endl;
        cout << "[ 1 ] Горизонтальная" << endl;
        cout << "[ 2 ] Вертикальная " << endl;
        cout << "[ + ] Выберите тип : " << endl;
        cin >> e;
        switch (e) {
        case 1:
        {
            cout << "[ + ] Длина линии: " << endl;
            cin >> a;
            cout << "[ + ] Текстура линии: " << endl;
            cin >> c;
            while (b != a) {
                b += 1;
                cout << c;

            }
            break;
        }
        case 2:
        {
            cout << "[ + ] Длина линии: " << endl;
            cin >> a;
            cout << "[ + ] Текстура линии: " << endl;
            cin >> c;
            while (b != a) {
                b += 1;
                cout << c << endl;

            }
            break;

        }
        default:
        {
            cout << "Неправильно " << endl;
        }

        }
    default:
        break;
    }
    }
}
