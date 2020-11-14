#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 0;
    int a, b, c, d;
    cout << "Введите a = ";
    cin >> a;
    cout << "Введите b = ";
    cin >> b;
    cout << "Введите c = ";
    cin >> c;
    cout << "Введите d = ";
    cin >> d;
    cout << a <<" " << b << endl;
    cout << c <<" " << d << endl;

    for (i = 10000; i < 100000; i++)
     if ((i % a == b) && (i % c == d)) 
     {
         cout << i << "  ";
         n = 1;
     }
     
if (n == 0) cout << -1; 
cout << endl;

return 0;
}