#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// duoc dung a[i] nhieu lan
// khong tinh hoan vi lap

int dp[101][1000001];
int mod = 1e9+7;
int main(){
    int n, s; cin >> n >> s;
    int a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++){
        dp[i][0] = 1;
        for(int j = 1; j <= s; j++){
            if(a[i] <= j){
                // tai vi tri dp[i]
                // la i chu khong phai la i-1 vi
                // a[i] duoc dung nhieu lan
                dp[i][j] = dp[i-1][j] + dp[i][j-a[i]];
                dp[i][j] %= mod;
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][s];
}

