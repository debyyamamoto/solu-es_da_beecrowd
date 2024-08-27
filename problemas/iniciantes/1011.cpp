#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))


int main(){
    double r, v, pi = 3.14159;
    cin >> r;
    v = (4 * pi * pow(r,3))/3;
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << v << endl;
return 0;
}