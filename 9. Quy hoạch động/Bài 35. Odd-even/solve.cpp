#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
  int n; cin >> n;
  map<int,int> mp;
  mp[0] = 1;
  int c = 0, l = 0;
  ll ans = 0;
  for(int i = 1; i <= n; i++){
          int x; cin >> x;
          if(x % 2 == 0) c++;
          else l++;
          if(mp.count(c-l)){
              ans += mp[c-l];    
        }
        mp[c-l]++;
  }
  cout << ans;
}

