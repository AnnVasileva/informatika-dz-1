#include <iostream>
using namespace std;
int main(){
    int t=0;
    int n=5;
    int a[n];
    int i;
    cout << "Введите исходный массив a" << endl;
    for (i=0; i < n; i++) {
      cout << "a[" << i << "] = ";
      cin >> a[i];
    }
    for (i=1; i < n; i++) {
    
        if ((a[i] < 0) && (a[i] < a[i-1]))
        {
            t = a[i];
            a[i] = a[i-1];
            a[i-1] = t;

        }
    } 
    cout << "Итоговый массив: "; 
    for (i=0; i < n; i++) 
        cout << a[i] << " ";
     
  
   return 0; 
}