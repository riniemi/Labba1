
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;

    cout << "Введите длину: ";
    cin >> a;
    cout << "Введите ширину: ";
    cin >> b;

    if (a <= 0 || b <= 0) {
        cout << "Ошибка: стороны прямоугольника не могут быть отрицательными или равны нулю!" << endl;
        return 0;
    }

    double P = 2 * (a + b);
    double S = a * b;
    double d = sqrt(a*a + b*b);

    cout << "Периметр: " << P << endl;
    cout << "Площадь: " << S << endl;
    cout << "Диагональ: " << d << endl;

    return 0;
}