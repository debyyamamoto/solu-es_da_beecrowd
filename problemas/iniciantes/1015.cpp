#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))
#define pi 3.14159

int main(){
    double x1, x2, y1, y2, d, i;
    cin >> x1 >> y1 >> x2 >> y2;
    i = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    d = sqrt(i);
    cout << fixed << setprecision(4);
    cout << d << endl;
}