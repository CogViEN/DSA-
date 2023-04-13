#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    string s; cin >> s;
    int n = s.size();
    ll F[n+1];
    F[0] = s[0] - '0';
    for(int i = 1; i < n; i++){
        F[i] = F[i-1] * 10 + (s[i] - '0') * (i+1);
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += F[i];
    }
    cout << ans;
}

