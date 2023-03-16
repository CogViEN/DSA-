#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[1000005];


int main()
{
    int n, s; cin >> n >> s;
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = 0, res = 0, sum = 0;
    while(r < n && l < n){
        if(sum + a[r] <= s){
            sum += a[r];
            res = max(res,r - l + 1);
            r++;
        }
        else{
            sum -= a[l];
            l++;
        }
    }
    cout << res;
}
