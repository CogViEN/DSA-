#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define endl '\n'
#define fi first
#define se second
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define pb push_back

int dp[5005][5005];

int main(){
    string a, b; cin >> a >> b;
    int n = a.length(), m = b.length();
    a = '0' + a; b = '0' + b;
    for(int i = 0; i <= n; i++){
        dp[i][0] = i;
    }    
    for(int j = 0; j <= m; j++){
        dp[0][j] = j;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i] != b[j]){
                dp[i][j] = min({dp[i][j-1]+1,
                                dp[i-1][j]+1,
                                dp[i-1][j-1]+1});
            }
            else dp[i][j] = dp[i-1][j-1];
        }
    }
    cout << dp[n][m];
}
 

