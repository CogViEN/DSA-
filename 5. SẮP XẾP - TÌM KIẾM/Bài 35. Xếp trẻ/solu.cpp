#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{    
  int n,x; cin >> n >> x;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a+n);
  int i = 0, j = n-1, cnt = 0;
  while(i < j){
      if(a[i] + a[j] <= x){
          i++, j--; cnt++;    
    }
    else if(a[i] + a[j] > x){
        j--;cnt++;
    }
  }
  if(i == j) cnt++;
  cout << cnt;
}
