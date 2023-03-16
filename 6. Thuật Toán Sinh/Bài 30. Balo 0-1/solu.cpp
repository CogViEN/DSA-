#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, w[100], v[100], s, a[100], final = 0;

void nhap(){
    cin >> n >> s;
    for(int i = 0; i < n; i++) cin >> w[i];
    for(int i = 0; i < n; i++) cin >> v[i];
}

void sinh(){
    int i = n-1;
    while(i >= 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == -1) final = true;
    else a[i] = 1;
}

int main(){
    nhap();
    ll ans = 0;
    while(!final){
        ll sum = 0, value = 0;
        for(int i = 0; i < n; i++){
            if(a[i]){
                sum += w[i];
                value += v[i];
            }
        }
        if(sum <= s){
            ans = max(ans,value);
        }
        sinh();
    }
    cout << ans;
}
