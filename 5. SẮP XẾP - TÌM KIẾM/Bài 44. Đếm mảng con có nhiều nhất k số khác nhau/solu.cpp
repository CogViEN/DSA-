#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{    
      int n,k; cin >> n >> k;
      int a[n];
      for(int &x : a) cin >> x;
      int cur_cnt = 0;
      map<int,int> mp;
      int l = 0;
      ll res = 0;
      for(int r = 0; r < n; r++){
          mp[a[r]]++;
          if(mp[a[r]] == 1) cur_cnt++;
          while(cur_cnt > k){
              mp[a[l]]--;
            if(mp[a[l]] == 0) cur_cnt--;
            l++;    
        }
        res += r - l + 1;
    }
    cout << res;
}
