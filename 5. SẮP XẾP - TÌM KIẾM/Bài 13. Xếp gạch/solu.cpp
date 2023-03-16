#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n,greater<int>());
    int doCung = a[0], res = 1;
    for(int i = 1; i < n; i++){
        if(doCung == 0) break;
        res++;
        doCung = min(doCung-1,a[i]);
    }
    cout << res;
}
