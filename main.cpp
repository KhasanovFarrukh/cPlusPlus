#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Russian");
    float a, b;

    cout << "Группа: 732-19 Студент: Хасанов Фаррух" << endl << endl;
    cout << "Введите первую сторону правого прямоугольника" << endl;
    cout << "a = ";
    cin >> a;
    cout << "Введите другую сторону правого прямоугольника" << endl;
    cout << "b = ";
    cin >> b;

    cout << "Площадь прямоугольника: " << a * b << endl;
    cout << "Периметр прямоугольника: " << 2 * (a + b) << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


