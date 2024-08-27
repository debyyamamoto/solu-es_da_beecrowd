#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))
#define pi 3.14159

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double at, ac, atra, aq, ar;
    at = a*c/2;
    ac = pi * pow(c, 2);
    atra = ((a + b) * c)/2;
    aq = pow(b,2);
    ar = a * b;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << at << endl;
    cout << "CIRCULO: " << ac << endl;
    cout << "TRAPEZIO: " << atra << endl;
    cout << "QUADRADO: " << aq << endl;
    cout << "RETANGULO: " << ar << endl;
return 0;
}