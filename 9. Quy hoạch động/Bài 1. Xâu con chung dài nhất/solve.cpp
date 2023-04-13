#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
     string s, t; cin >> s >> t;
     int n = s.length(), m = t.length();
     s = '0' + s;
     t = '0' + t;
     int dp[n+1][m+1];
     for(int i = 0; i <= n; i++) dp[i][0] = 0;
     for(int j = 0; j <= m; j++) dp[0][j] = 0;
     
     for(int i = 1; i <= n; i++){
         for(int j = 1; j <= m; j++){
             if(s[i] == t[j]) dp[i][j] = dp[i-1][j-1] + 1;
             else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
         }
     }
     cout << dp[n][m];
}

