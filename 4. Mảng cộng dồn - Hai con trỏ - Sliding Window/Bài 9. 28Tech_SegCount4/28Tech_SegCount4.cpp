#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[1000005];

int main()
{
    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r;
    ll ans = 0;
    multiset<ll> mse;
    for(r = 0; r < n; r++){
        mse.insert(a[r]);
        while(*mse.rbegin() - *mse.begin() > k){
            multiset<ll>::iterator it = mse.find(a[l]);
            mse.erase(it); l++;
        }
        ans += r - l + 1;
    }
    cout << ans;
}
