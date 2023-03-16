#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int D[1000005];
int a[1000005];

int main()
{
    int n,q; cin >> n;
    a[0] = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
        D[i] = a[i] - a[i-1];
    }
    for(int i = 1; i <= n; i++) cout << D[i] << " ";
}
