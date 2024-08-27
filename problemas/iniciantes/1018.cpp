#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))
#define pi 3.14159

int main(){
    ll a;
    vector <pair<int, int>> celulas;
    celulas.push_back(make_pair(100,0));
    celulas.push_back(make_pair(50,0));
    celulas.push_back(make_pair(20,0));
    celulas.push_back(make_pair(10,0));
    celulas.push_back(make_pair(5,0));
    celulas.push_back(make_pair(2,0));
    celulas.push_back(make_pair(1,0));
    
    cin >> a;
    cout << a << endl;
    for(int i = 0; i < 7; i++){
        while(a >= celulas[i].first){
            a = a - celulas[i].first;
            celulas[i].second++;
        }
    }
    for(int i = 0; i < 7; i++){
        cout << celulas[i].second << " nota(s) de R$ "<< celulas[i].first << ",00"<< endl;
    }
return 0;
}