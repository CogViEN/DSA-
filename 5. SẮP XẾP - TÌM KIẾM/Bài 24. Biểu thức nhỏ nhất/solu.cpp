#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// so dau tien luon la so co mat trong ket qua
// vi vay chi sort tu a + 1 den a + n

int main()
{    
   int n, k; cin >> n >> k;
   int a[n];  
   for(int i = 0; i < n; i++) cin >> a[i];
   sort(a + 1, a+n, greater<int>());
   ll res = a[0];
   for(int i = 1; i < n; i++){
           if(k > 0){
               res += a[i]; k--;    
        }
        else res -= a[i];
   }
   cout << res;
}
