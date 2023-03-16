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

int d[1000005];
int check(int a[],int n,int k){
    for(int i = 0; i < k; i++){
        d[a[i]]++;
        if(d[a[i]] > 1) return 1;
    }
    for(int i = k; i < n; i++){
        d[a[i - k]]--;
        d[a[i]]++;
        if(d[a[i]] > 1) return 1;
    }
    return 0;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    if(check(a,n,k)) cout << "YES";
    else cout << "NO";
    
}
















