#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        mp[x]++; mp[y]--;
    }
    int res = 0, cnt = 0;
    for(auto it : mp){
        cnt += it.second;
        res = max(res,cnt);
    }
    cout << res;
}
