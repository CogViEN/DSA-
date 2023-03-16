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
    int a[n], sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    } 
    if(sum < k){
        cout << -1; return 0;
    }
    int cur_cnt = 0;
    for(int i = 0; i < k; i++){
        cur_cnt += a[i];
    }
    int max_val = cur_cnt;
    for(int i  = k; i < n; i++){
        cur_cnt -= a[i - k];
        cur_cnt += a[i];
        max_val = max(max_val, cur_cnt);
    }
    cout << k - max_val;
}
















