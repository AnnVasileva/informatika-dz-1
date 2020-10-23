#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double  F;
  double max = -10, min = 1000;
  int i, j;
  double h, b;
  double a[3];
  int N;
  double x;
  
  cout << "Введите значение h = ";
   cin >> h;
  cout << "Введите значение b = ";
   cin >> b;
  cout << "Введите значение N = ";
   cin >> N;
  
 
   cout << "Введите массив a: " << endl;
    
    for (i=0; i < 3; i++)
    {
     cout << "a[" << i+1 << "] = ";
     cin >> a[i];
    }
  cout << endl;
  
  
   for (i=0; i < 3; i++)
  {
    for (j=0; j < N; j++)
    {
       x = b + j * h;
       cout <<"x = " << x << "  ";
    
       if (a[i] >= 0) F =  x * cos (a[i] - x + 1);
        else F =  2 * cos (a[i] + x);
      
      cout << "F" << i+1 << " = " << F;
      cout << endl;
     
      if (F > max) max = abs (F);
      if (F < min) min = abs (F);
      
     } 
  }
  
  cout << endl;
  
cout << "Максимальный элемент по модулю = " << max << endl;
cout << "Минимальный элемент по модулю = " << min << endl;

return 0;
}