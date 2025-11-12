#include <iostream>
#include <string>
using namespace std;

// Функция для очистки консоли
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Функция для рисования линии
void drawLine(int size, char symbol) {
    for (int i = 0; i < size; i++) {
        cout << symbol << " ";
    }
    cout << endl;
}

// Функция для рисования квадрата
void drawSquare(int size, char symbol, bool filled) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (filled || i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                cout << symbol << " ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

// Функция для рисования прямоугольника
void drawRectangle(int height, int width, char symbol, bool filled) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (filled || i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                cout << symbol << " ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

// Функция для рисования треугольника
void drawTriangle(int height, char symbol, bool filled) {
    int width = 2 * height - 1;
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            // Центр треугольника
            int center = height - 1;
            
            // Границы треугольника на текущей строке
            int left = center - i;
            int right = center + i;
            
            if (j == left || j == right || i == height - 1) {
                cout << symbol << " ";
            } else if (filled && j > left && j < right) {
                cout << symbol << " ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

int main() {
    int choice;
    int size, width, height;
    char symbol;
    int typeChoice;
    
    cout << "[ 15 ] Самостоятельная работа | M-" << endl << endl;
    cout << "Тема: [ FOR ]" << endl << endl;
    cout << "Продолжение программы \"Геометрические фигуры\"" << endl << endl;
    
    cout << "[ - ] Программа \"Геометрические фигуры\"" << endl << endl;
    cout << "[ 1 ] Линия" << endl;
    cout << "[ 2 ] Квадрат" << endl;
    cout << "[ 3 ] Прямоугольник" << endl;
    cout << "[ 4 ] Треугольник" << endl << endl;
    
    cout << "[ - ] Выберите фигуру: ";
    cin >> choice;
    
    clearScreen();
    
    switch (choice) {
        case 1:
            cout << "[ - ] Фигура: \"Линия\"" << endl << endl;
            cout << "[ - ] Размер: ";
            cin >> size;
            cout << "[ - ] Текстура: ";
            cin >> symbol;
            cout << endl << "Программа выводит результат относительно введенных пользователем данных:" << endl << endl;
            cout << "[ - ] Результат:" << endl << endl;
            drawLine(size, symbol);
            break;
            
        case 2:
            cout << "[ - ] Фигура: \"Квадрат\"" << endl << endl;
            cout << "[ 1 ] Заполненный" << endl;
            cout << "[ 2 ] Пустой" << endl << endl;
            cout << "[ - ] Выберите тип: ";
            cin >> typeChoice;
            cout << endl << "Далее программа запрашивает высоту и текстуру(символ):" << endl << endl;
            cout << "[ - ] Размер: ";
            cin >> size;
            cout << "[ - ] Текстура: ";
            cin >> symbol;
            cout << endl << "Программа выводит результат относительно введенных пользователем данных:" << endl << endl;
            cout << "[ - ] Результат:" << endl << endl;
            drawSquare(size, symbol, typeChoice == 1);
            break;
            
        case 3:
            cout << "[ - ] Фигура: \"Прямоугольник\"" << endl << endl;
            cout << "[ 1 ] Заполненный" << endl;
            cout << "[ 2 ] Пустой" << endl << endl;
            cout << "[ - ] Выберите тип: ";
            cin >> typeChoice;
            cout << endl << "Далее программа запрашивает высоту, ширину и текстуру(символ):" << endl << endl;
            cout << "[ - ] Высота: ";
            cin >> height;
            cout << "[ - ] Ширина: ";
            cin >> width;
            cout << "[ - ] Текстура: ";
            cin >> symbol;
            cout << endl << "Программа выводит результат относительно введенных пользователем данных:" << endl << endl;
            cout << "[ - ] Результат:" << endl << endl;
            drawRectangle(height, width, symbol, typeChoice == 1);
            break;
            
        case 4:
            cout << "[ - ] Фигура: \"Треугольник\"" << endl << endl;
            cout << "[ 1 ] Заполненный" << endl;
            cout << "[ 2 ] Пустой" << endl << endl;
            cout << "[ - ] Выберите тип: ";
            cin >> typeChoice;
            cout << endl << "Далее программа запрашивает высоту и текстуру(символ):" << endl << endl;
            cout << "[ - ] Размер: ";
            cin >> size;
            cout << "[ - ] Текстура: ";
            cin >> symbol;
            cout << endl << "Программа выводит результат относительно введенных пользователем данных:" << endl << endl;
            cout << "[ - ] Результат:" << endl << endl;
            drawTriangle(size, symbol, typeChoice == 1);
            break;
            
        default:
            cout << "Неверный выбор!" << endl;
            break;
    }
    
    return 0;
}
