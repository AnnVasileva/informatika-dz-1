#include <iostream>
using namespace std;
int main()
{
    const int n = 6;
    int i, j;
    int t;
    int a[n];
    cout << "Введите массив a: " << endl;
    for (i=0; i < n; i++)
      cin >> a[i];
      cout << "Первоначальный массив: " << endl;
      for (i=0; i < n; i++)
      cout << a[i] << " ";
      cout << endl;


    for (i=n-1; i > 0; i--)
       if ((a[i+1] < a[i]) && (a[i] >= 0) && (a[i+1] < 0))
       {
           t = a[i];
           a[i] = a[i+1];
           a[i+1] = t;
       }

      for (i=0; i < n-1; i++)
      if ((a[i] > a[i+1]) && (a[i+1] < 0) && (a[i] > 0))
       {
           t = a[i];
           a[i] = a[i+1];
           a[i+1] = t;
       }
       

cout << "Изменённый массив: " << endl;
for (i=0; i < n; i++)
 cout << a[i] << " ";
 cout << endl;
 
 return 0;
}