#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))
#define pi 3.14159

int main(){
    double a, c, m;
    vector <pair<double, int>> celulas;
    celulas.push_back(make_pair(100,0));
    celulas.push_back(make_pair(50,0));
    celulas.push_back(make_pair(20,0));
    celulas.push_back(make_pair(10,0));
    celulas.push_back(make_pair(5,0));
    celulas.push_back(make_pair(2,0));

    vector<pair<double,int>> moedas;
    moedas.push_back(make_pair(1.0,0));
    moedas.push_back(make_pair(0.5,0));
    moedas.push_back(make_pair(0.25,0));
    moedas.push_back(make_pair(0.10,0));
    moedas.push_back(make_pair(0.05,0));
    moedas.push_back(make_pair(0.01,0));
    cin >> a;
    c = floor(a);
    m = a - c;

    for(int i = 0; i < 6; i++){
        while(c >= celulas[i].first){
            c = c - celulas[i].first;
            celulas[i].second++;
        }
    }
    m = m + c;
    m += 0.001f;
    for(int i = 0; i < 6; i ++){
        while(m >= moedas[i].first){
            m = m - moedas[i].first;
            moedas[i].second++;
        }
    }
    cout << fixed << setprecision(2);
    cout << "NOTAS:" << endl;
    for(int i = 0; i < 6; i++){
        cout << celulas[i].second << " nota(s) de R$ "<< celulas[i].first << endl;
    }
    cout << "MOEDAS:" << endl;
    for(int i = 0; i < 6; i++){
        cout << moedas[i].second << " moeda(s) de R$ "<< moedas[i].first << endl;
    }
return 0;
}