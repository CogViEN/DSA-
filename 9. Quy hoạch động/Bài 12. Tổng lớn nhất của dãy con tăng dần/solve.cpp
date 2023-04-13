#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[1005], n;
int lis[1005];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        lis[i] = a[i];
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                lis[i] = max(lis[i], lis[j]+a[i]);
            }
        }
    }
    int res = lis[0];
    for(int i = 1; i < n; i++){
        res = max(res,lis[i]);
    }
    cout << res;
}
