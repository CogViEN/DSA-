#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        int pos = upper_bound(a + i + 1, a+n, k-a[i]) - a;
        cnt += n - pos;
    }
    cout << cnt;
}
