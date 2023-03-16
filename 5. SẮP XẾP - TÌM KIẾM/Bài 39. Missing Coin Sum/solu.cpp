#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}

int main()
{    
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a+n);
  ll max_coin = 0;
  for(int i = 0; i < n; i++){
          if(a[i] > max_coin+1) break;
          else max_coin = max_coin + a[i];
  }
  cout << max_coin+1;
}
