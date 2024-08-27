#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))
#define pi 3.14159

int main(){
    ll x;
    double y, r;
    cin >> x >> y;
    r = x/y;

    cout << fixed << setprecision(3);
    cout << r << " km/l" << endl;
return 0;
}