#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
     int n; cin >> n;
     int a[n+1];
     for(int i = 1; i <= n; i++) cin >> a[i];
     int F[n+1] = {0}, G[n+1] = {0};
     F[1] = 1;
     int res = 0;
     for(int i = 2; i <= n; i++){
         if(a[i] > a[i-1]) F[i] = F[i-1]+1;
         else F[i] = 1;
         res = max(res, F[i]);
     }
     G[n] = 1;
     for(int i = n-1; i >= 1; i--){
         if(a[i] < a[i+1]) G[i] = G[i+1] + 1;
         else G[i] = 1;
         res = max(res, G[i]);
     }
     for(int i = 2; i <= n-1; i++){
         if(a[i-1] < a[i+1]) res = max(res, F[i-1] + G[i+1]);
     }
     cout << res;
}

