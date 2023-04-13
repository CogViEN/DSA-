#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dp[101][101][101];

int main(){
     string x, y, z; cin >> x >> y >> z;
     int a = x.length(), b = y.length(), c = z.length();
     x = '0' + x, y = '0' + y, z = '0' + z;
     for(int i = 1; i <= a; i++){
         for(int j = 1; j <= b; j++){
             for(int k = 1; k <= c; k++){
                 if(x[i] == y[j] && y[j] == z[k]){
                     dp[i][j][k] = dp[i-1][j-1][k-1]+1;    
                }
                else{
                    dp[i][j][k] = max({dp[i-1][j][k],
                                       dp[i][j-1][k],
                                       dp[i][j][k-1]});
                }    
            }    
        }    
    }
    cout << dp[a][b][c];
}

