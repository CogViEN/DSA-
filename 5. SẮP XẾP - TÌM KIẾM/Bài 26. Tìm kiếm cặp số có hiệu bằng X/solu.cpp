#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int BS(int a[],int l,int r,int k){
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == k) return 1;
        else if(a[mid] > k) r = mid-1;
        else l = mid+1;
    }
    return 0;
}

int check(int a[],int n,int k){
    for(int i = 0; i < n; i++){
        if(BS(a,i,n-1,k+a[i])) return 1;
    }
    return -1;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    cout << check(a,n,k);
}
