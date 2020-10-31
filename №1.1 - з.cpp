#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double  F;
  int i, j;
  double pr = 1, sum = 0;
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
      
       if (a[i] >= 0) F =  sin(1 + a[i] * x - x * x);
        else F =  sin(a[i] + x) * sin(a[i] + x);
      
      cout << "F" << i+1 << " = " << F;
      cout << endl;
     
      pr = pr * F;
      sum = sum + abs(F);
      
     } 
  }
  
  cout << endl;
  
cout << "Произведение = " << pr << endl;
cout << "Сумма = " << sum << endl;

return 0;
}