#include <iostream>
using namespace std;
int main()
{
    const int n = 5;
    int max = -10000, maxb = -10000;
    int m;
    int i, j;
    int a[i];
    cout << "Введите массив a: " << endl;
     for (i=0; i < n; i++)
      cin >> a[i];
    for (i=0; i < n; i++)
    cout << a[i] << " ";
    cout << endl;

    for (i=0; i < n; i++)
      if (a[i] > max) max = a[i];

    int *b = new int [max];
      for (j=0; j <= max; j++)
       b[j] = 0;

    for (i=0; i < n; i++)
     b[a[i]] += 1;

     for (j=0; j <= max; j++)
      if (b[j] > maxb) 
      {
          maxb = b[j];
          m = j;
      }
      delete [] b;
       
      cout << "Самое часто повторяющееся число в массиве = " << m << endl;
      return 0;


}