#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[1005], n;
int lis1[1005];
int lis2[1005];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        lis1[i] = a[i];
        lis2[i] = a[i];
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                lis1[i] = max(lis1[i], lis1[j]+a[i]);
            }
        }
    }
    for(int i = n-1; i >= 0; i--){
        for(int j = n-1; j > i; j--){
            if(a[i] > a[j]){
                lis2[i] = max(lis2[i], lis2[j]+a[i]);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, lis1[i] + lis2[i] - a[i]);
    }
    cout << ans;
}
