#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	int a, c, d;
	SetConsoleOutputCP(1251);
	cout << "Введіть c--> ";
	cin >> c;
	cout << "Введіть d--> ";
	cin >> d;
	a = c * d + 18;
	cout << "Результат=" << a << endl;
	return 0;
}