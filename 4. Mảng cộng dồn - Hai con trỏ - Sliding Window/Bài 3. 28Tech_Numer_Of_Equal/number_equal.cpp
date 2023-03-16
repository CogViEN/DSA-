#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,m; cin >> n >> m;
    map<int,int> mp1,mp2;
    set<int> se;
    while(n--){
        int x; cin >> x;
        mp1[x]++;
        se.insert(x);
    }
    while(m--){
        int x; cin >> x;
        mp2[x]++;
        se.insert(x);
    }
    ll cnt = 0;
    for(set<int>:: iterator it = se.begin(); it != se.end();
    ++it){
        if(mp1[*it] && mp2[*it])
        cnt += 1ll * mp1[*it] * mp2[*it]; 
    }
    cout << cnt;
}
