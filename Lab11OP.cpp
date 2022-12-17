// Lab11OP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct Store
{
    int count;
    float price;
    char name[10];
};

int l, i, j;
float x;

int main()
{
    l = 0;
    j = 5;
    Store A[j];
    cout << "   Введіть назву малими літерами(не більше 10 символів), кількість і ціну товару через пробіл:  " << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        cin >> A[i].name >> A[i].count >> A[i].price;
        cout << endl;
    }
    cout << "__________________________________________________________" << endl;
    cout << endl;
    cout << "   Введіть рівень ціни товару (грн): ";
    cin >> x; cout << endl;
    cout << "    Товари, ціна яких не перевищує " << x << " грн" << endl;
    for (i = 1; i <= 5; i++)
        if (A[i].price <= x)
        {
            cout << "     " << A[i].name << "     " << A[i].count << " шт." << endl;
            l = l + A[i].count;

        }
    cout << "    Загальна кількість товарів з ціною яка не перевищує " << x << " грн. дорівнює " << l << " шт.";
    return 0;
}
