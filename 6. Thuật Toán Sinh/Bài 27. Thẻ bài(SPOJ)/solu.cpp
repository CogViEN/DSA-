#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a[100];

void init(){
    for(int i = 1; i <= n; i++) a[i] = i;
}

int check(){
    for(int i = 2; i <= n; i++){
        if(abs(a[i] - a[i-1]) == 1) return 0;
    }
    return 1;
}

int main(){
    cin >> n;
    init();
    do{
        if(check()){
            for(int i = 1; i <= n; i++)
                cout << a[i];
            cout << endl;
        }
    }while(next_permutation(a+1, a+n+1));
}
