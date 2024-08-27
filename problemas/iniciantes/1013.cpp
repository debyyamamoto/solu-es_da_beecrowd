#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))
#define pi 3.14159

int main(){
    ll a, b, c, maior;
    cin >> a >> b >> c;
    maior = (a + b+ abs(a - b))/2;
    if(maior > c){
        cout << maior <<" eh o maior" << endl;
    }else{
        cout << c << " eh o maior" << endl;
    }
return 0;
}