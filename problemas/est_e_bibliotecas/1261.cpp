#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))


int main(){
    ll m, n, v, salary;
    string a;
    map<string, ll> w;
    cin >> m >> n;
    //adicionar as palavras no dicionário 
    for(int i = 0; i < m; i++){
        cin >> a;
        cin >> v;
        w.insert(make_pair(a, v));
    }
    map<string, ll>::iterator it;
    //calcular o salário
    for(int i = 0; i < n; i++){
        while(cin >> a){
            if(a == ".") break;
            it = w.find(a);
            if(it != w.end()){
                salary += it->second;
            }
        }
        cout << salary << endl;
        salary = 0;
    }
return 0;
}