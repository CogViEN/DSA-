#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n,greater<int>());
    ll res = 0;
    for(int i = 0; i < n; i++){
        if(a[i] - i <= 0) break;
        res += a[i] - i;
    }
    cout << res;
}
