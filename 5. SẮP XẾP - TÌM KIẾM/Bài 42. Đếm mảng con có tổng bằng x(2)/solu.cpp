#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{    
      int n, k; cin >> n >> k;
      int a[n+1];
      for(int i = 1; i <= n; i++) cin >> a[i];
      map<ll,int> mp;
      ll F[n+1] = {0};
      mp[0] = 1;
      ll cnt = 0;
      for(int i = 1; i <= n; i++){
          F[i] = F[i-1] + a[i];
        cnt += mp[F[i] - k];
        mp[F[i]]++;    
    }
    cout << cnt;
}
