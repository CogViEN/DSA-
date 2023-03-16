#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, ok = 1;
int x[105];

void init(){
    for(int i = 1; i <= n; i++){
        x[i] = i;
    }
}

void sinh(){
    int i = n-1;
    while(i >= 1 && x[i] > x[i+1]) i--;
    if(i == 0){
        ok = 0; return;
    }
    int j = n;
    while(x[j] < x[i]) j--;
    swap(x[i],x[j]);
    reverse(x+i+1, x+n+1);
}

int main(){
    string s; cin >> s;
    set<char> se;
    for(char c : s) se.insert(c);
    n = se.size();
    init();
    s = "";
    for(char c : se) s += c;
    while(ok){
        for(int i = 1; i <= n; i++){
            cout << s[x[i]-1];
        }
        cout << endl;
        sinh();
    }
}
