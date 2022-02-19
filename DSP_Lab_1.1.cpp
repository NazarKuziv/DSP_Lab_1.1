// Lab_1_1.cpp
// < Кузів Назар >
// Лабораторна робота 1
// Логіка
// Варіант 6

#include <iostream>
using namespace std;

bool AND(bool p, bool q)
{
    if (p == 1 && q == 1)
        return 1;
    else
        return 0;
}

int main()
{
    bool  p, q;
    cout << "Enter 1-True or 0-False"<<endl;
    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    if (AND(p, q) == 1)
        cout << "pANDq = True";
    else
        cout << "pANDq = False";
    cout << endl;

    if (p == 1 || q == 1)
        cout << "pORq = True";
    else
        cout << "pORq = False";
    cout << endl;

    if (p != q)
        cout << "pXORq = True";
    else
        cout << "pXORq = False";
    cout << endl;

    if (p == 1 && q == 0)
        cout << "p->q = False";
    else
        cout << "p->q = True";
    cout << endl;

    if (p == q)
        cout << "p~q = True";
    else
        cout << "p~q = False";
    cout << endl;

    return 0;
}
