#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{    
  int n; cin >> n;
  int a[n], d[200005] = {0};
  for(int i = 0; i < n; i++) cin >> a[i];
  int res = 0;
  for(int i = 0; i < n; i++){
      if(d[a[i]-1] == 0) res++;
      d[a[i]] = 1;
  }
  cout << res;
  
}
