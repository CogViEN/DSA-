#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[1000005];
int dem[100005]; // dem so luong phan tu khac nhau

int main()
{
    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    int l = 0, r;
    int cnt = 0;
    for(r = 0; r < n; r++){
        dem[a[r]]++;
        if(dem[a[r]] == 1) cnt++;
        while(cnt > k){
            if(dem[a[l]] == 1) --cnt;
            dem[a[l]]--; l++;
        }
        // cnt <= k
        ans += r - l + 1;
    }
    cout << ans;
}
