#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int F[1000005];

int find(int n){
    if(n == 0) return 0;
    if(F[n]) return F[n];
    int m = n;
    int res = 1e9;
    while(m){
        int r = m % 10;
        if(r != 0)
            res = min(res, find(n-r)+1);
        m /= 10;
    }
    F[n] = res;
    return F[n];
}

int main(){
    int n; cin >> n;
    cout << find(n);
}

