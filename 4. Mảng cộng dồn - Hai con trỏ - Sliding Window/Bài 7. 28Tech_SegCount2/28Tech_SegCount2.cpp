#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[1000005];


int main()
{
    int n, s; cin >> n >> s;
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r;
    ll sum = 0, res = 0;
    for(r = 0; r < n; r++){
        sum += a[r];
        while(sum >= s){
            res += n - r;
            sum -= a[l];
            l++;
        }
    }    
    cout << res;
}
