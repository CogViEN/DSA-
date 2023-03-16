#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a[100], b[100], final = 0;

void nhap(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> b[i];
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0) final = 1;
    else a[i] = 1;
}

int main(){    
    nhap();
    ll ans = 1e18;
    while(!final){
        ll s1 = 0, s2 = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] == 0) s1 += b[i];
            else s2 += b[i];
        }
        ans = min(ans,abs(s1-s2));
        sinh();
    }
    cout << ans;
    
}
