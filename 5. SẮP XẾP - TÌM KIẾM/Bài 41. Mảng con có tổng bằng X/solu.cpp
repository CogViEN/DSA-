#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int tong = 0, cnt = 0, l = 0;
    for(int i = 0; i < n; i++){
        if(tong == x) cnt++;
        tong += a[i];
        while(tong > x){
            tong -= a[l]; l++;
        }
    }
    if(tong == x) cnt++;
    cout << cnt;
}
