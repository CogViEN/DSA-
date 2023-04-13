#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[41];

int main(){
       int n; cin >> n;
       a[0] = 1;
       for(int i = 1; i <= n; i++){
           for(int j = 1; j <= 3; j++){
               if(i >= j){
                   a[i] += a[i-j];    
            }    
        }
    }
    cout << a[n];
}

