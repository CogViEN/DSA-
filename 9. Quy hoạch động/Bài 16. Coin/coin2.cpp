#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int mod = 1e9+7;
int main(){
    int n, s; cin >> n >> s;
    int a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int dp[s+1] = {0};
    dp[0] = 1;
    for(int i = 1; i <= s; i++){
        for(int j = 1; j <= n; j++){
            if(i >= a[j]){
                dp[i] += dp[i-a[j]];
                dp[i] %= mod;
            }
        }
    }
    cout << dp[s];
}

