#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,ok = 0;
string s;

void init(){
    s = string(n,'6');    
}

void sinh(){
    int i = n - 1;
    while(i >= 0 && s[i] == '8'){
        s[i] = '6';
        i--;
    }
    if(i == -1){
        ok = 1; return;
    }
    s[i] = '8';
}

int main(){
    vector<ll> res;
    for(int i = 1; i <= 9; i++){
        n = i;
        init();
        ok = 0;
        while(!ok){
            string t = s;
            reverse(t.begin(),t.end());
            res.push_back(stoll(s+t));
            sinh();
        }
    }
    sort(res.begin(), res.end());
    int m; cin >> m;
    for(int i = 0; i < m; i++){
        cout << res[i] << " ";
    }
}
