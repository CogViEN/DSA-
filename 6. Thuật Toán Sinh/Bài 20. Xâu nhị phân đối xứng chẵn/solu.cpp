#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, ok;
int x[1005];

void init(){
    for(int i = 1; i <= n; i++) x[i] = 0;
}

void sinh(){
    int i = n;
    while(i >= 1 && x[i] == 1) x[i--] = 0;
    if(i == 0){
        ok = 0; return;
    }
    x[i] = 1;
}

int main(){
    int m; cin >> m;
    vector<string> v;
    for(n = 1; n <= m/2; n++){
        init();
        ok = 1;
        while(ok){
            string s = "";
            for(int i = 1; i <= n; i++) s += to_string(x[i]);
            string tmp = s;
            reverse(tmp.begin(),tmp.end());
            v.push_back(s+tmp);
            sinh();
        }
    }
    sort(v.begin(),v.end());
    for(string a : v) cout << a << endl;
}
