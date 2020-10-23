#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, j;
    double h, b, x;
    int n;
    double a[3];
    double F;
    double pr = 1;
    double max = -1000;

   cout << "Введите значение h = ";
     cin >> h;
    cout << "Введите значение b = ";
     cin >> b;
    cout << "Введите значение n = ";
     cin >> n;
     
cout << "Введите массив a:" << endl;

    for (i=0; i < 3; i++)
    {
        cout << "a[" << i+1 << "] = ";
        cin >> a[i];
    }
    cout << endl;

    for (i=0; i < 3; i++)
    {
        for (j=0; j < n; j++)
        {
            x = b + j * h;
            F = 0.8 + 2 * sin (x) - 5.5 * sin (a[i]) * sin (a[i]);
            cout << "F(" << i+1 << ") = " << F << endl;
            if (F > max) max = abs (F);
            pr = pr * abs (F);

        }

    }
    cout << endl;

    cout << "Максимальный элемент по модулю = " << max << endl;
    cout << "Произведение элементов по модулю = " << pr << endl;
    
    
    return 0;
}