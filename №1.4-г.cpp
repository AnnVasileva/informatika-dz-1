#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   const int n = 23;
   int i, j;
   double x[3];
   double F;
   double u[n];
   u[0] = 1;

   for (i=0; i < 3; i++)
   {
    cout << "x[" << i+1 << "] = ";
    cin >> x[i];
   }

   for (i=0; i < 3; i++)
   {
       F = 3.5 * sin(x[i]) * sin(x[i]) - 2.7 * sin(x[i] + 1);
       for (j=1; j <= n; j++)
       {
         u[j] = (2/3 * u[j-1]) + (F / 3 * u[j-1] * u [j-1]);

         if (j == n) cout << "u[" << i+1 << "] = " << u[j] << endl;
       }
   }

return 0;
}