#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const int n = 11;
    int i, j;
    double a0, b0;
    double eps;
    double a[n];
    double b[n];
    cout << "Введите значение a0 = ";
    cin >> a0;
    cout << "Введите значение b0 = ";
    cin >> b0;
    cout << "Введите значение eps = ";
    cin >> eps;

    a[0] = a0;
    b[0] = b0;

for (i=0; i < n; i++)
{ 
    if (i > 0) a[i] = sqrt(2 + sin(a[i-1] + b[i-1])) + sqrt(2 - cos(a[i-1] + b[i-1]));
 for (j=0; j < n; j++)
 {
     if ((j > 0) && (i > 0))
     {
     if (a[i-1] < 0) b[j] = sin(a[i-1] + b[j-1]) * sin(a[i-1] + b[j-1]);
     else b[j] = sin(1 + a[i-1] * b[j-1] - b[j-1] * b[j-1]);
     }
     if ((b[j] / (1 + a[i] * a[i])) < eps) cout << a[i] << endl;
     break;
 }
}
return 0;
}