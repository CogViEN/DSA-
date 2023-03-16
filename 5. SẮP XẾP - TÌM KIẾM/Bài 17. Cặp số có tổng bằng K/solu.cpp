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
        int pos1 = lower_bound(a + i + 1, a+n, k-a[i]) - a;
        int pos2 = upper_bound(a + i + 1, a+n, k-a[i]) - a;
        cnt += pos2 - pos1;
    }
    cout << cnt;
}
