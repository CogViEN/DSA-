#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{    
  int n, l; cin >> n >> l;
  double a[n];
  for(double &x : a) cin >> x;
  sort(a, a + n);
  double res = 0;
  for(int i = 1; i < n; i++){
          res = max(res, 1.0*(a[i] - a[i-1]) / 2);
  }
  res = max({res, a[0], l-a[n-1]});
  cout << fixed << setprecision(10) << res; 
}
