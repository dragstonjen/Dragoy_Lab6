#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 10;
    int b = 5;
    int* ptrA = &a;
    int* ptrB = &b;
    int sum = *ptrA + *ptrB;
    int diff = *ptrA - *ptrB;
    cout << "Сума через вказівники: " << sum << endl;
    cout << "Різниця через вказівники: " << diff << endl;

    return 0;
}
