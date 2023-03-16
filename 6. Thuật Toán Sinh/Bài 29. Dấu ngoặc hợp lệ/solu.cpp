#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[100], n, ok = 1;

void init(){
    for(int i = 1; i <= n; i++) a[i] = 0;
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        i--;
    }
    if(i == 0){
        ok = 0; return;
    }
    a[i] = 1;
    for(int j = i + 1; j <= n; j++){
        a[j] = 0;
    }
}

int check(){
    stack<int> st;
    for(int i = 1; i <= n; i++){
        if(a[i] == 0) st.push(0);
        else{
            if(!st.empty()){
                if(st.top() == 0) st.pop();
            }
            else if(st.empty()) return 0;
        }
    }
    return st.empty();
}

int main(){
    cin >> n;
    init();
    bool flag = false;
    while(ok){
        if(check()){
            for(int i = 1; i <= n; i++){
                if(a[i] == 0) cout << '(';
                else cout << ')';
            }
            flag = true;
            cout << endl;
        }
        sinh();
    }
    if(!flag) cout << "NOT FOUND";
}
