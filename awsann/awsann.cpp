#include <iostream>
using namespace std;
#include <windows.h>
int main()
{
    SetConsoleOutputCP(1251);
    int number, first, second, third, N;
    cout << "������ �����-������ �����-->";
    cin >> number;
    first = number / 100;
    second = (number / 10) % 10;
    third = number % 10;
    N = second * 100 + first * 10 + third;
    cout << "�������� ����� ���� ������������ ������ �� �������-->" << N << endl;
    return 0;
}