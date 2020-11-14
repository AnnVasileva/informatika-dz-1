#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    cout << "Введите число n = ";
    cin >> n;

    for (i=2; i <= n; i++)
    {
     if ((n % i == 0) && (i != n)) cout << "composite";
      else cout << "prime";
      break;
    }

      cout << endl;

      return 0;
}