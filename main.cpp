#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Russian");
    float a, b;

    cout << "������: 732-19 �������: ������� ������" << endl << endl;
    cout << "������� ������ ������� ������� ��������������" << endl;
    cout << "a = ";
    cin >> a;
    cout << "������� ������ ������� ������� ��������������" << endl;
    cout << "b = ";
    cin >> b;

    cout << "������� ��������������: " << a * b << endl;
    cout << "�������� ��������������: " << 2 * (a + b) << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


