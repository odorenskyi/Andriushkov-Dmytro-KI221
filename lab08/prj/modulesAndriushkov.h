#ifndef modulesAndriushkov_H
#define modulesAndriushkov_H
#include <iostream>
#include <math.h>

using namespace std;

void s_calculation( ){

   int x = 0;
   int y = 0;
   int z = 0;

   cout << "X: ";
   cin >> x;
   cout << "Y: ";
   cin >> y;
   cout << "Z: ";
   cin >> z;


   double S = z * sin((pow(x,2) * y)) + sqrt(abs(z - 12 * x)) / pow(y,3);

   cout << S;
}
#endif // modulesAndriushkov_H;
