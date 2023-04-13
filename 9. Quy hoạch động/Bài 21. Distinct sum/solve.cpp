#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
     int n; cin >> n;
     int a[n+1];
    bool F[10001];
     memset(F, false, sizeof(F));
     for(int i = 1; i <= n; i++) cin >> a[i];
     int sum = accumulate(a+1,a+n+1,0);
     F[0] = true;
     for(int i = 1; i <= n; i++){
         for(int j = sum; j >= 1; j--){
             if(a[i] <= j){
                 F[j] = F[j] || F[j-a[i]];    
            }    
        }
    }
    for(int i = 0; i <= sum; i++){
        if(F[i]) cout << i << " ";
    }
}

