#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[100005];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n,k; cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a,a + n);
    for(int i = 0; i < n; i++){
        ll sum = k - a[i];
        int l = i, r = n - 1;
        while(l < r){
            if(a[l] + a[r] == sum){
                cout << "YES"; return 0;
            }
            else if(a[l] + a[r] > sum) r--;
            else l++;
        }
    }
    cout << "NO";
}
