#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int D[1000005];
int a[1000005];

int main()
{
    int n,q; cin >> n >> q;
    a[0] = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
        D[i] = a[i] - a[i-1];
    }
    while(q--){
        int l,r,d; cin >> l >> r >> d;
        l++,r++;
        D[l] += d, D[r+1] -= d;
    }
    // khoi phuc lai mang a
    for(int i = 1; i <= n; i++){
        a[i] = a[i-1] + D[i];
        cout << a[i] << " ";
    }
}
