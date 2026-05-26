#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    system("cls");
    cout << "Программа - \"Геометрические фигуры\"" << endl;
    cout << "[ 1 ] Линия" << endl;
    cout << "[ 2 ] Квадрат" << endl;
    cout << "[ 3 ] Прямоугольник" << endl;
    cout << "[ 4 ] Треугольник" << endl;
    cout << "[ 5 ] Решётка" << endl;
    cout << "[ 6 ] Крест" << endl;
    cout << "[ 7 ] Плюс" << endl;
    cout << "[ 8 ] Ромб" << endl;
    cout << "[ 9 ] Змейка" << endl;
    cout << "[ 10 ] Рекурсивный квадрат" << endl;
    cout << "[ + ] Выберите фигуру: ";
    int num_shape;
    cin >> num_shape;

    if (num_shape == 1) {
        cout << "[ + ] Фигура: \"Линия\"" << endl;
        cout << "[ 1 ] Горизонтальная" << endl;
        cout << "[ 2 ] Вертикальная" << endl;

        cout << "[ + ] Выберите тип: ";
        int type_of_shape;
        cin >> type_of_shape;

        cout << "[ + ] Введите размер: ";
        int size;
        cin >> size;

        cout << "[ + ] Введите символ: ";
        char symbol;
        cin >> symbol;

        if (type_of_shape == 1) {
            int i = 0;
            while (i < size) {
                cout << symbol;
                i += 1;
            }
            cout << endl;
        }
        else if (type_of_shape == 2) {
            int i = 0;
            while (i < size) {
                cout << symbol << endl;
                i += 1;
            }
        }
        else {
            cout << "[!] Неверный тип фигуры!" << endl;
        }
    }
    else if (num_shape == 2) {
        system("cls");
        cout << "[ + ] Фигура: \"Квадрат\"" << endl;
        cout << "[ 1 ] Заполненный" << endl;
        cout << "[ 2 ] Пустой" << endl;

        cout << "[ + ] Выберите тип: ";
        int type_of_square;
        cin >> type_of_square;

        cout << "[ + ] Размер: ";
        int size;
        cin >> size;

        cout << "[ + ] Текстура: ";
        char texture;
        cin >> texture;

        cout << "[ + ] Результат:" << endl;

        if (type_of_square == 1) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    cout << texture << " ";
                }
                cout << endl;
            }
        }
        else if (type_of_square == 2) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                        cout << texture << " ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
        }
        else {
            cout << "[!] Неверный тип квадрата!" << endl;
        }
    }
    else if (num_shape == 3) {
        system("cls");
        cout << "[ + ] Фигура: \"Прямоугольник\"" << endl;
        cout << "[ 1 ] Заполненный" << endl;
        cout << "[ 2 ] Пустой" << endl;

        cout << "[ + ] Выберите тип: ";
        int type_of_rectangle;
        cin >> type_of_rectangle;

        cout << "[ + ] Ширина: ";
        int width;
        cin >> width;

        cout << "[ + ] Высота: ";
        int height;
        cin >> height;

        cout << "[ + ] Текстура: ";
        char texture;
        cin >> texture;

        cout << "[ + ] Результат:" << endl;

        if (type_of_rectangle == 1) {
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    cout << texture << " ";
                }
                cout << endl;
            }
        }
        else if (type_of_rectangle == 2) {
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                        cout << texture << " ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
        }
        else {
            cout << "[!] Неверный тип прямоугольника!" << endl;
        }
    }
    else if (num_shape == 4) {
        system("cls");
        cout << "[ + ] Фигура: \"Треугольник\"" << endl;
        cout << "[ 1 ] Заполненный" << endl;
        cout << "[ 2 ] Пустой" << endl;

        cout << "[ + ] Выберите тип: ";
        int type_of_triangle;
        cin >> type_of_triangle;

        cout << "[ + ] Размер: ";
        int size;
        cin >> size;

        cout << "[ + ] Текстура: ";
        char texture;
        cin >> texture;

        cout << "[ + ] Результат:" << endl;

        if (type_of_triangle == 1) {
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size - i; j++) {
                    cout << ". ";
                }
                for (int k = 1; k <= 2 * i - 1; k++) {
                    cout << texture << " ";
                }
                for (int j = 1; j <= size - i; j++) {
                    cout << ". ";
                }
                cout << endl;
            }
        }
        else if (type_of_triangle == 2) {
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size - i; j++) {
                    cout << ". ";
                }
                for (int k = 1; k <= 2 * i - 1; k++) {
                    if (k == 1 || k == 2 * i - 1 || i == size) {
                        cout << texture << " ";
                    }
                    else {
                        cout << ". ";
                    }
                }
                for (int j = 1; j <= size - i; j++) {
                    cout << ". ";
                }
                cout << endl;
            }
        }
        else {
            cout << "[!] Неверный тип треугольника!" << endl;
        }
    }
    else if (num_shape == 5) {
        system("cls");
        cout << "[ + ] Фигура: \"Решетка\"" << endl;

        cout << "[ + ] Размер: ";
        int size;
        cin >> size;

        cout << "[ + ] Текстура: ";
        char texture;
        cin >> texture;

        cout << "[ + ] Результат:" << endl;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i % 2 == 0) {
                    if (j % 2 == 0) {
                        cout << ". ";
                    }
                    else {
                        cout << texture << " ";
                    }
                }
                else {
                    cout << texture << " ";
                }
            }
            cout << endl;
        }
    }
    else if (num_shape == 6) {
        system("cls");
        cout << "[ + ] Фигура: \"Крестик\"" << endl;

        cout << "[ + ] Размер: ";
        int size;
        cin >> size;

        cout << "[ + ] Текстура: ";
        char texture;
        cin >> texture;

        cout << "[ + ] Результат:" << endl;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j || i + j == size - 1) {
                    cout << texture << " ";
                }
                else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
    }
    else if (num_shape == 7) {
        system("cls");
        cout << "[ + ] Фигура: \"Плюс\"" << endl;

        cout << "[ + ] Размер: ";
        int size;
        cin >> size;

        cout << "[ + ] Текстура: ";
        char texture;
        cin >> texture;

        cout << "[ + ] Результат:" << endl;

        int middle = size / 2;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == middle || j == middle) {
                    cout << texture << " ";
                }
                else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
    }
    else if (num_shape == 8) {
        system("cls");
        cout << "[ + ] Фигура: \"Ромб\"" << endl;

        cout << "[ + ] Размер: ";
        int size;
        cin >> size;

        cout << "[ + ] Текстура: ";
        char texture;
        cin >> texture;

        cout << "[ + ] Результат:" << endl;

        int middle = size / 2;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int distance_i = abs(i - middle);
                int distance_j = abs(j - middle);

                if (distance_i + distance_j == middle) {
                    cout << texture << " ";
                }
                else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
    }
    else if (num_shape == 9) {
        system("cls");
        cout << "[ + ] Фигура: \"Змейка\"" << endl;

        cout << "[ + ] Размер: ";
        int size;
        cin >> size;

        cout << "[ + ] Текстура: ";
        char texture;
        cin >> texture;

        cout << "[ + ] Результат:" << endl;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i % 2 == 0) {
                    cout << texture << " ";
                }
                else {
                    if ((i % 4 == 1 && j == size - 1) || (i % 4 == 3 && j == 0)) {
                        cout << texture << " ";
                    }
                    else {
                        cout << ". ";
                    }
                }
            }
            cout << endl;
        }
    }
    else if (num_shape == 10) {
        system("cls");
        cout << "[ + ] Фигура: \"Рекурсивный квадрат\"" << endl;

        cout << "[ + ] Размер: ";
        int size;
        cin >> size;

        cout << "[ + ] Текстура: ";
        char texture;
        cin >> texture;

        cout << "[ + ] Результат:" << endl;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int minDistToBorder = min(min(i, size - 1 - i), min(j, size - 1 - j));
                bool isBorder = false;

                int offset = 0;
                int currentSize = size;
                while (currentSize > 0) {
                    if (i == offset || i == offset + currentSize - 1 ||
                        j == offset || j == offset + currentSize - 1) {
                        if (i >= offset && i < offset + currentSize &&
                            j >= offset && j < offset + currentSize) {
                            isBorder = true;
                            break;
                        }
                    }
                    offset += 2;
                    currentSize -= 4;
                }

                if (isBorder) {
                    cout << texture << " ";
                }
                else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
        }
    else {
            cout << "[!] Данная фигура ещё не реализована в этом примере." << endl;
    }

        return 0;
    }
