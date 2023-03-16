#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define FORD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define endl '\n'

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];    
    int res = 1e9, l = 0, cur_sum = 0, st = l;
    for(int r = 0; r < n; r++){
        cur_sum += a[r];
        if(cur_sum >= k){
            while(cur_sum >= k){
                if(r - l + 1 < res){
                    res = r - l + 1;
                    st = l;
                }
                if(cur_sum - a[l] < k) break;
                cur_sum -= a[l]; l++;
            }
        }
    }
    if(res == 1e9) cout << -1;
    else{
        for(int i = st; i < st + res; i++){
            cout << a[i] << " ";
        }
    }
}

