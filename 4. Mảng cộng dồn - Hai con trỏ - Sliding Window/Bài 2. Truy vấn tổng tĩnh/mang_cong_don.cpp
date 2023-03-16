#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll F[1000005];

int main()
{
    int n,q; cin >> n >> q;
    F[0] = 0;
    for(int i = 1; i <= n; i++){
        int temp; cin >> temp;
        F[i] = F[i-1] + temp;
    }
    while(q--){
        int l,r; cin >> l >> r;
        l++,r++;
        cout << F[r] - F[l-1] << "\n";
    }
}
