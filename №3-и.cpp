#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   double h, b, x;
   int i, j;
   int n;
   double a[3];
   double F;
   double min = 1000;
   double pr = 1;

    cout << "Введите значение h = ";
     cin >> h;
    cout << "Введите значение b = ";
     cin >> b;
    cout << "Введите значение n = ";
     cin >> n;
cout << "Введите массив a: " << endl;
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
       F = ( 1 - 5.7 * cos (a[i] - x)) / (2.6 + cos (a[i] + x) * cos (a[i] + x));
       cout << "F(" << i+1 << ") = "<< F << endl;
       if (F < min) min = F;
       pr = pr * abs (F);
    }
}
cout << endl;
 cout << "Минимальный элемент = " << min << endl;
 cout << "Произведение всех элементов по модулю = " << pr << endl;

     return 0;
}