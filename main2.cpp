#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    // Ремарка: устанавливаем кодировку UTF-8 для корректного отображения кириллицы
    system("chcp 65001 > nul");

    double a, b, c, d;

    cout << "Введите основания (a, b) и боковые стороны (c, d): ";
    if (!(cin >> a >> b >> c >> d)) {
        cout << "Ошибка: Введите числовые значения." << endl;
        return 1;
    }

    // 1. Проверка на положительные значения
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        cout << "Ошибка: Стороны должны быть больше нуля." << endl;
        return 0;
    }

    // Пусть 'a' всегда будет большим основанием для удобства расчетов
    if (a < b) swap(a, b);
    double diff = a - b;

    // 2. Проверка на существование трапеции
    // Разность оснований и две боковые стороны должны удовлетворять неравенству треугольника
    if (diff >= c + d || c >= diff + d || d >= diff + c || diff == 0) {
        cout << "Ошибка: Трапеция с такими сторонами не существует." << endl;
        return 0;
    }

    // Расчеты
    double perimeter = a + b + c + d;
    double mid_line = (a + b) / 2.0;

    // Площадь по формуле через четыре стороны
    // Используем max(0.0, ...), чтобы избежать ошибок из-за точности double под корнем
    double s_part = ((diff * diff) + (c * c) - (d * d)) / (2 * diff);
    double height = sqrt(max(0.0, (c * c) - (s_part * s_part)));
    double area = mid_line * height;

    cout << "\n--- Результаты ---" << endl;
    cout << "Периметр: " << perimeter << endl;
    cout << "Средняя линия: " << mid_line << endl;
    cout << "Площадь: " << area << endl;

    return 0;
}
