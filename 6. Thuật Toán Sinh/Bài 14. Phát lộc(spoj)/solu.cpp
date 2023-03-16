#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, ok = 1;
int x[105];

void init(){
    x[1] = 8, x[2] = 6, x[n] = 6;
    for(int i = 3; i <= n-1; i++)
        x[i] = 6;
}

int check(){
    int d8 = 0, d6 = 0;
    for(int i = 1; i <= n; i++){
        if(x[i] == 8){
            d8++; d6 = 0;
        }
        else{
            d6++; d8 = 0;
        }
        if(d6 == 4 || d8 == 2) return 0;
    }
    return 1;
}

void sinh(){
    int i = n-1;
    while(i >= 3 && x[i] == 8){
        x[i] = 6;
        i--;
    }
    if(i <= 2){
        ok = 0;
        return;
    }
    x[i] = 8;
}

int main(){
    cin >> n;
    init();    
    while(ok){
        if(check()){
            for(int i = 1; i <= n; i++){
                cout << x[i];
            }
            cout << endl;
        }
        sinh();
    }
}
