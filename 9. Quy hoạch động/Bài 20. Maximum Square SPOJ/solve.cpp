#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[501][501];
int dp[501][501];

int main(){
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int res = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 0) dp[i][j] = 0;
            else{
                dp[i][j] = min({dp[i-1][j],
                                dp[i][j-1],
                                dp[i-1][j-1]})+1;
            }
            res = max(dp[i][j], res);
        }
    }
    cout << res;
}

