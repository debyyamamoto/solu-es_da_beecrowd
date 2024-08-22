#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

#define INF ((float)(1e+300 * 1e+300))


int main(){
    ll n;
    while(cin >> n){
        if(n == 0) return 0;
        for(int i = 0; i < n; i++){
            ll c = 0, aux, q = -1;
            for(int i = 0; i < 5; i++){
                cin >> aux;
                if(aux <= 127){
                    c++;
                    q = i;
                }
            }
        if(c == 1){
            if(q == 0) cout << "A" << endl;
            else if(q == 1) cout << "B" << endl;
            else if(q == 2) cout << "C" << endl;
            else if(q == 3) cout << "D" << endl;
            else if(q == 4) cout << "E" << endl;
        }
        else{
            cout << "*" << endl;
        }
        }
    }
return 0;
}
