#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[1000005];

int main()
{
    int n,s; cin >> n >> s;
    ll sum = 0;
    int l = 0,ans = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(sum > s){
            sum -= a[l];l++;
        }
        ans += r - l + 1;
    }
    cout << ans;
}
