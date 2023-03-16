#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,k , ok = 1;
int x[1005];

void sinh(){
    int i = k;
    while(i >= 1 && x[i] == n-k+i) i--;
    x[i]++;
    for(int j = i+1; j <= k; j++){
        x[j] = x[j-1]+1;
    }
}

int res(int a[]){
    int cnt = 0;
    for(int i = 1; i <= k; i++){
        if(a[i] != x[i]) cnt++;
    }
    return cnt;
}

int main(){
    cin >> n >> k;
    int a[k+1];
    for(int i = 1; i <= k; i++){
        cin >> a[i];
        x[i] = a[i];
    }
    sinh();
    cout << res(a);
}
