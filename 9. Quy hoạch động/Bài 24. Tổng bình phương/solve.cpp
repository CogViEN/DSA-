#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    ll F[n+1];
    for(int i = 0; i <= n; i++) F[i] = i;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= sqrt(i); j++){
            F[i] = min(F[i], F[i-j*j]+1);
        }
    }
    cout << F[n];
}

