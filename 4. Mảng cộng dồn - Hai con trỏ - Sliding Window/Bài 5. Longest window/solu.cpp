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
    string s; cin >> s;
    int d[256] = {0};
    int res = 0, l = 0;
    for(int r = 0; r < s.length(); r++){
        d[s[r]]++;
        if(d[s[r]] > 1){
            while(d[s[r]] > 1){
                d[s[l]]--; l++;
            }
        }
        res = max(res,r - l + 1);
    }
    cout << res;
}

