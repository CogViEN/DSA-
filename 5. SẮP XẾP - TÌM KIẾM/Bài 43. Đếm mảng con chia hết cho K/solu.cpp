#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{    
      int n; cin >> n;
      int k = n;
      int a[n+1];
      for(int i = 1; i <= n; i++) cin >> a[i];
      map<ll,int> mp;
      ll sum = 0;
      mp[0] = 1;
      ll cnt = 0;
      for(int i = 1; i <= n; i++){
          sum = (sum + a[i] % k + k) % k;
        cnt += mp[sum];
        mp[sum]++;    
    }
    cout << cnt;
}
