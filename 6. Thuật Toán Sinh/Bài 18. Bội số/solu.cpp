#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, ok = 1;
int a[1005];

void init(){
    for(int i = 1; i <= n; i++) a[i] = 0;
    a[n] = 8;
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 8) a[i--] = 0;
    if(i == 0){
        ok = 0; return;
    }
    a[i] = 8;
}

int main(){
    n = 19;
    init();
    vector<ll> v;
    while(ok){
        ll tmp = 0;
        for(int i = 1; i <= n; i++) tmp = tmp*10 + a[i];
        v.push_back(tmp);
        sinh();
    }
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        for(ll x : v){
            if(x % k == 0){
                cout << x << endl;
                break;
            }
        }
    }
}
