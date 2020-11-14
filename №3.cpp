#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int n = 7;
    int i;
    int a[n];
    int r = 0;
    double sum = 0;
    int k = 0;
    cout << "Введите массив a: " << endl;
    for (i=0; i < n; i++)
     cin >> a[i];
      for (i=0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;

    for (i=0; i < n; i++)
     if (a[i] % 2 != 0) 
     {
         sum += a[i];
         k++;
         r = 1;
     }
if (r == 0) cout << "NO";
else cout << "Среднее арифметическое нечётных элементов массива = " << fixed << setprecision(2) << sum / k << endl;
cout << endl;

return 0;
}
