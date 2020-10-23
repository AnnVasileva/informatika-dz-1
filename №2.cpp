#include <iostream>
using namespace std;
int main(){
    int i;
    int t=0;
    int A, B, C, D;
    int n = 9;
    int a[n];

    cout << "Введите исходный массив а: "<< endl;
    for (i=0; i < n; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }

cout << "A=";
cin >> A;
cout << "B=";
cin >> B;
cout << "C=";
cin >> C;
cout << "D=";
cin >> D;

int k=0;

for (i=A; i <= (B - ((B - A + 1) / 2)); i++)
{
    t = a[i];
    a[i] = a[B-k];
    a[B-k] = t;
    k++;
}

int r=0;
for (i=C; i <= (D - ((D - C + 1) / 2)); i++)
{
    t = a[i];
    a[i] = a[D-r];
    a[D-r] = t;
    r++;
}
cout << "Итоговый массив a: ";
for (i=0; i < n; i++)
 cout << a[i] << " ";

return 0;
}