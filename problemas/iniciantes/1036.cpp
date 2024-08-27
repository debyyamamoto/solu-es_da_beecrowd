#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))
#define pi 3.14159

int main(){
    double a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    delta = pow(b, 2) - (4 * a * c);
    if(delta < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }
    else if(delta == 0){
        cout << fixed << setprecision(5);
        cout << -b/(2*a) << endl;
    }
    else{
        cout << fixed << setprecision(5);
        x1 = ((-b) + (sqrt(delta)))/(2 * a);
        x2 = ((-b) - (sqrt(delta)))/(2 * a);
        cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
    }
return 0;
}