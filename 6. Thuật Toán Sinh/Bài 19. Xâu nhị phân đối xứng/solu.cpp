#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, ok = 1;
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
    n = m/2;
    init();
    while(ok){
        string s = "";
        for(int i = 1; i <= n; i++){
            s += to_string(x[i]);
        }
        string tmp = s;
        reverse(tmp.begin(),tmp.end());
        if(m % 2 == 0) cout << s+tmp << endl;
        else cout << s+"0"+tmp << endl << s+"1"+tmp << endl;
        sinh();
    }
}
