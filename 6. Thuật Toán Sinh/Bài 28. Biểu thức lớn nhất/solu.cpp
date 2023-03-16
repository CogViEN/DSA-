#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int x, y, z, t, ok;
string s = "";

void init(){
    s = "+++";
}

void sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '-'){
        i--;
    }
    if(i == -1){
        ok = 0; return;
    }
    s[i] = '-';
    for(int j = i + 1; j <= s.size(); j++) s[j] = '+';
}

int main(){
    cin >> x >> y >> z >> t;
    init();
    ll res = -1e18;
    ok = 1;
    while(ok){
        ll tmp = x;
        if(s[0] == '+') tmp += y;
        else tmp -= y;
        if(s[1] == '+') tmp += z;
        else tmp -= z;
        if(s[2] == '+') tmp += t;
        else tmp -= t;
        res = max(res,tmp);
        sinh();
    }
    cout << res;
}
