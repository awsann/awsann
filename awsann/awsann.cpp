#include <iostream>
using namespace std;
#include <windows.h>
int main()
{
    SetConsoleOutputCP(1251);
    int number, first, second, third, N;
    cout << "¬вед≥ть трьох-значне число-->";
    cin >> number;
    first = number / 100;
    second = (number / 10) % 10;
    third = number % 10;
    N = second * 100 + first * 10 + third;
    cout << "ќтримане число п≥сл€ перестановки сотень та дес€тк≥в-->" << N << endl;
    return 0;
}