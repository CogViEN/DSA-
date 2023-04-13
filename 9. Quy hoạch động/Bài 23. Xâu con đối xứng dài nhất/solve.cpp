#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dp[1005][1005], ans = 0;

int main(){
    string s; cin >> s;
    int n = s.size();
    s = " " + s;
    //bai toan con co so
    for(int i = 1; i <= n; i++){
        dp[i][i] = 1;
    }
    for(int len = 2; len <= n; len++){
        // duyet cac chi so bat dau cua xau co do dai
        // la len
        for(int i = 1; i < n-len+1; i++){
            // n - len + 1 => n co len phan tu
            int j = i + len - 1; // chi so ket thuc
            if(len == 2){
                dp[i][j] = (s[i] == s[j]);
            }
            else{
                dp[i][j] = (s[i] == s[j]) && dp[i+1][j-1];
            }
            if(dp[i][j]) ans = max(ans,len);
        }
    }
    cout << ans;
}
