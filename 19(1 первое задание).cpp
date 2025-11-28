#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double a, b, c;
   
  
   std::cout << "Введите значение a:";
   std::cin >> a;
   std::cout << "Введите значение b: ";
   std::cin >> b;
   std::cout >> "Введите значение c:";
   std::cin >> c;
   
   
   double result = (b + sqrt(b*b + 4*a*c)) / (2*a) - pow(a, 3) + pow(b, -2);
   
  
   std::cout << "Результат:" << result << std::endl;
   return 0;
}
