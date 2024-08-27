#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))
#define pi 3.14159

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if((b > c) && (d > a) && ((c+d) > (a+b)) && (c > 0) && (d > 0) && (a%2 == 0)){
        cout << "Valores aceitos" << endl; 
    }else{
        cout << "Valores nao aceitos" << endl;
    }
return 0;
}