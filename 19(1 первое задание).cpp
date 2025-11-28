#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   float a, b, c, result;
   
  
   cout << "Введите значение a, b , c:";
   cin >> a >> b >> c;
   
   
   float result = (b + sqrt(b*b + 4*a*c)) / (2*a) - pow(a, 3) + pow(b, -2);
   
  
   cout << "Результат:" << result << endl;
   return 0;
}
