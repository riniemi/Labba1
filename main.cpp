#include <iostream>
using namespace std;
int main() {
    cout << "Введите радиус и угол (градусы): ";
    double r, a;
    if (!(cin >> r >> a) || r < 0) { cout << "Некорректный ввод\n"; return 0; }
    const double pi = 3.14159265358979323846;
    cout << "Длина: " << 2 * pi * r << "\n";
    cout << "Площадь круга: " << pi * r * r << "\n";
    cout << "Площадь сектора: " << pi * r * r * a / 360.0 << "\n";
    return 0;
}
