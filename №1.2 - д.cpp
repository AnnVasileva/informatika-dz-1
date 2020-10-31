#include <iostream>
#include <cmath>
using namespace std;
int main()
{
const int n = 45, m = 8;
 double z0, z1, h;
 int i, j;
 double z[n];
 int k[m];

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
     {
         if (i >= 2) z[i] =  sqrt(2 + sin(z[i-1] + z[i-2])) + sqrt(2 - cos(z[i-1] + z[i-2]));
         if ((((z[i] + 1.5)*(z[i] + 1.5)) >= (j * h)) && (((z[i] + 1.5)*(z[i] + 1.5)) < ((j+1) * h)))
            k[j]++;
     }
cout << endl;

for (j=0; j < m; j++)
cout << "k[" << j+1 << "] = " << k[j] << endl;

return 0;
}