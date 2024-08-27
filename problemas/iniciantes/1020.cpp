#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))
#define pi 3.14159

int main(){
    ll t;
    cin >> t; //dias
    vector<pair<ll, ll>> tempo;
    tempo.push_back(make_pair(365,0));
    tempo.push_back(make_pair(30,0));
    for(int i = 0; i < 2; i++){
        while(t >= tempo[i].first){
            t = t - tempo[i].first;
            tempo[i].second++;
        }
    }
    cout << tempo[0].second << " ano(s)" << endl;
    cout << tempo[1].second << " mes(es)" << endl;
    cout << t << " dia(s)" << endl;
return 0;
}