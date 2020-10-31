#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   const int n = 27;
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
       if (x[i] < 0) F = log(x[i] * x[i] + 2.7);
       else F = log(x[i] + 2.7);
       for (j=1; j <= n; j++)
       {
         u[j] = (2/3 * u[j-1]) + (F / 3 * u[j-1] * u [j-1]);

         if (j == n) cout << "u[" << i+1 << "] = " << u[j] << endl;
       }
   }

return 0;
}