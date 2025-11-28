#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   float a, b, c;
   
  
   cout << "Введите значение a:";
   cin >> a;
  cout << "Введите значение b: ";
   cin >> b;
   cout << "Введите значение c:";
   cin >> c;
   
   
   float result = (b + sqrt(b*b + 4*a*c)) / (2*a) - pow(a, 3) + pow(b, -2);
   
  
   std::cout << "Результат:" << result << endl;
   return 0;
}
