#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, h;

    // Ввод данных с защитой от отрицательных чисел
    cout << "Введите длины оснований (a, b), боковых сторон (c, d) и высоту (h):" << endl;
    while (true) {
        cin >> a >> b >> c >> d >> h;
        if (a >= 0 && b >= 0 && c >= 0 && d >= 0 && h >= 0)
            break;
        else {
            cout << "Ошибка: числа не могут быть отрицательными. Повторите ввод:" << endl;
            // Очистка ошибочного ввода (на случай букв)
            cin.clear();
            while (cin.get() != '\n');
        }
    }

    // Вычисления
    double perimeter = a + b + c + d;
    double midline = (a + b) / 2.0;
    double area = midline * h;

    // Вывод результатов
    cout << "Периметр: " << perimeter << endl;
    cout << "Средняя линия: " << midline << endl;
    cout << "Площадь: " << area << endl;

    return 0;
}