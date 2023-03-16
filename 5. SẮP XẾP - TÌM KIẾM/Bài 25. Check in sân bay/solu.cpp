#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    pair<int,int> a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n);
    ll res = 0;
    for(int i = 0; i < n; i++){
        if(a[i].first > res){
            res = a[i].first + a[i].second;
        }
        else res += a[i].second;
    }
    cout << res;
}
