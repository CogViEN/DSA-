#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, ok = 1;
int x[105];

void init(){
    for(int i = 1; i <= n; i++)
        x[i] = 0;
    x[n] = 1;
}

void sinh(){
    int i = n;
    while(i >= 1 && x[i] == 1){
        x[i] = 0;
        i--;
    }
    if(i == 0){
        ok = 0;
        return;
    }
    x[i] = 1;
}


int main(){    
    cin >> n;
    init();
    vector<string> v;
    while(ok){
        string s = "";
        for(int i = 1; i <= n; i++){
            if(x[i] == 1) s += to_string(i) + " ";
        }
        v.push_back(s);
        sinh();
    }
    sort(v.begin(), v.end());
    for(string x : v) cout << x << endl;
}
