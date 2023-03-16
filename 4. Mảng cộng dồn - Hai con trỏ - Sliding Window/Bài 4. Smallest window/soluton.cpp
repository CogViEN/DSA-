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

int dem(string s){
    int d[256] = {0}, cnt = 0;
    for(int i = 0; i < s.length(); i++){
        d[s.at(i)]++;
        if(d[s.at(i)] == 1) cnt++;
    }
    return cnt;
}

int xuli(string a){
    int k = dem(a);
    int d[256] = {0}, cur_cnt = 0, l = 0;
    int min_val = 1e9;
    for(int r = 0; r < a.length(); r++){
        d[a[r]]++;
        if(d[a[r]] == 1) cur_cnt++;
        while(cur_cnt == k){
            min_val = min(min_val,r - l + 1);
            if(d[a[l]] == 1) break;
            d[a[l]]--;
            l++;
        }
    }
    return min_val;
}

int main(){
    string s; cin >> s;
    cout << xuli(s);
    
}
















