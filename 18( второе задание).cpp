#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;


double radiusOfCircumscribedCircle(double a) {
    return a / sqrt(3);
}

int main() {
    double sideLength = 10.0; // Длина стороны треугольника 
    
    cout << "Длина стороны равностороннего треугольника: " << sideLength << endl;
    cout << "Радиус описанной окружности: " << radiusOfCircumscribedCircle(sideLength) << endl;
    
    return 0;
}
