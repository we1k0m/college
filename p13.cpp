#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 0;
    char c;
    int d;
    int e;
    int g =0 ;
    int f;
    setlocale(0, "");
    cout << "[ + ] Программа - “Геометрические фигуры”" << endl;
    cout << "[ 1 ] Линия" << endl;
    cout << "[ 2 ] Квадрат" << endl;
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
                cout << c <<" ";

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
    case 2:
    {
        cout << "[ + ] Фигура: “Квадрат” " << endl;
        cout << "[ 1 ] Заполненный" << endl;
        cout << "[ 2 ] Пустой " << endl;
        cout << "[ + ] Выберите тип : " << endl;
        cin >> e;
        switch (e) {
        case 1:
        {
            cout << "[ + ] Размер: " << endl;
            cin >> a;
            cout << "[ + ] Текстура: " << endl;
            cin >> c;
            while (g != a)
            {

                while (b != a) {
                    b++;
                    cout << c<< " ";
                
                }
                if (b == a)
                {
                    b = 0;
                    g++;
                    cout << endl;
                }
            }
            break;
        }
        case 2:
        {
            cout << "[ + ] Размер: " << endl;
            cin >> a;
            cout << "[ + ] Текстура: " << endl;
            cin >> c;
            while ((g != a)and(not (f== (a*2))))
            {
                if (f == 2) {
                    break;
                    return;
                }
                if ((g==0) or (g=a))
                {
                    while (b != a) {
                        b++;
                        cout << c<< " ";
                        f++;

                    }
                    if (b == a)
                    {
                        b = 0;
                        g++;
                        cout << endl;
                        
                    }

                }
                else {
                    while (b != a) {
                        b++;
                        cout << c << " ";
                        for (int i = 1; i < (a - 1); i++) {
                            cout <<" ";
                        }
                        cout << c << " ";
                    }
                    if (b = a)
                    {
                        b = 0;
                        g++;
                        cout << endl;
                    }

                    
                }



            }
            break;

        }
        default:
        {
            cout << "Неправильно " << endl;
        }

        }
    }
    default:
        break;
    }
    }

}
