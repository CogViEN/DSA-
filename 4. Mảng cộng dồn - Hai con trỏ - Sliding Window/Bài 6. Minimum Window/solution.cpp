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
    string s,t ; cin >> s >> t;
    int dT[256] = {0}, cntT = 0;
    for(char c : t){
        dT[c]++;
        if(dT[c] == 1) cntT++;
    }
    int res = 1e9, l = 0;
    string ans = ""; 
    int dS[256] = {0}, cntS = 0;
    for(int r = 0; r < s.length(); r++){
        dS[s[r]]++;
        if(dT[s[r]] > 0 && dS[s[r]] == dT[s[r]]){
            cntS++;
        }
        if(cntS == cntT){
            while(cntS == cntT){
                if(dS[s[l]] == dT[s[l]]) break;
                dS[s[l]]--; l++;
            }
            if(r - l + 1 < res){
                res = r - l + 1;
                ans = s.substr(l, r - l + 1);
            }
        }
    }
    if(res == 1e9) cout << -1;
    cout << ans;
}

