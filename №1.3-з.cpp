#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const int n = 13;
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
    if (i > 0) a[i] = ((1 - a[i-1]) / (1 + b[i-1] * b[i-1])) * sin(a[i-1] * a[i-1] + a[i-1] * b[i-1] + 2);
 for (j=0; j < n; j++)
 {
     if (j > 0) b[j] = 0.8 + 2*sin(b[j-1]) - 5.5 * sin(a[i-1]) * sin(a[i-1]);
     if ((a[i] * a[i] - b[j] * b[j]) < eps) cout << a[i] << endl;
     break;
 }
}
return 0;
}