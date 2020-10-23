#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const int n = 40, m = 10;
    int i, j;
    double h;
    double z0, z1;
    double z[n], k[m];

    cout << "Введите значение h = ";
     cin >> h;
    cout << "Введите значение z0 = ";
     cin >> z0;
    cout << "Введите значение z1 = ";
     cin >> z1;

     z[0] = z0;
     z[1] = z1;

for (j=0; j < m; j++)
     k[j] = 0;

     for (i=0; i < n; i++)
      for (j=0; j < m; j++)
      {  if (i >= 2)
           {
             if (z[i-1] >= 0) z[i] = z[i-2] * cos (z[i-1] - z[i-2] + 1);
               else z[i] = 2 * cos (z[i-1] + z[i-2]);
           }
         if ((abs (z[i]) >= (j * h)) && (abs (z[i]) < ((j+1) * h)))
         k[j]++;
      }

   for (j=0; j < m; j++)
   cout << "k[" << j << "] = " << k[j] << endl;

return 0;
}