#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,ok = 1;
char a[1005], c;

void init(){
    for(int i = 1; i <= n; i++) a[i] = 'A';
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == c){
        a[i] = 'A';
        i--;
    }
    if(i == 0){
        ok = 0; return;
    }
    a[i] += 1;
}

int main(){
    cin >> c;
    cin >> n;
    init();
    while(ok){
        for(int i = 1; i <= n; i++)
            cout << a[i];
        cout << endl;
        sinh();
    }
}
