#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{    
      int n,k; cin >> n;
      int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      ll res = 1;
      int l = 0;
      map<int,int> mp;
      for(int r = 0; r < n; r++){
          mp[a[r]]++;
          if(mp[a[r]] > 1){
              while(mp[a[r]] > 1){
                  mp[a[l]]--;
                  l++;
            }
        }
        res = max(res, 1ll*r-l+1);
    }
    cout << res;
}
