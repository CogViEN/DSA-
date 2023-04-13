#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// subnet sum problem dp

//F[i][j] : i la so luong to tien tu 1 den i dan dung
//          j la so tien dang chua
//F[i][j] la co tong tien la j va co i to tien thi co bao
//nhieu cach de tao ra tong tien la j

bool dp[202][500001];

int main(){
       int n, s; cin >> n >> s;
       int a[n+1];
       for(int i = 1; i <= n; i++) cin >> a[i];
       dp[0][0] = 1;
       for(int i = 1; i <= n; i++){
           dp[i][0] = 1;
           for(int j = 1; j <= s; j++){
               if(j < a[i]) dp[i][j] = dp[i-1][j];
               else{
                   dp[i][j] = (dp[i-1][j] || dp[i-1][j-a[i]]);    
            }
        }        
    }
    cout << dp[n][s];
}

