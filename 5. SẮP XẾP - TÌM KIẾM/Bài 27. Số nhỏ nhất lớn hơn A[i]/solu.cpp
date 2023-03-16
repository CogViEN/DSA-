#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int first_pos(int a[],int n,int x){
    int l = 0, r = n - 1, res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] > x){
            res = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    return res;
}

int main(){
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    for(int i = 0; i < n; i++){
        int pos = first_pos(b,n,a[i]);
        if(pos == -1) cout << "_ ";
        else cout << b[pos] << " ";
    }
}
