#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll F[100];

void fibo(){
    F[0] = 0,F[1] = 1;
    for(int i = 2; i <= 90; i++){
        F[i] = F[i-1] + F[i-2];
    }
}

int main()
{
    fibo();
    int n; cin >> n;
    ll a[n][n],cnt = 0;
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    while(h1<=h2 && c1<=c2){
        // xay dung dong tren cung
        for(int i = c1; i <= c2;i++){
            a[h1][i] = F[cnt];
            cnt++;
        }
        ++h1;
        // xay dung canh ben phai 
        for(int i = h1; i <= h2; i++){
            a[i][c2] = F[cnt];
            cnt++;
        }
        c2--;
        if(c1<=c2){
            // xay dung dong cuoi cung
            for(int i = c2; i >= c1; i--){
                a[h2][i] = F[cnt];
                cnt++;
            }
            h2--;
        }
        // xay dung canh ben trai
        if(h1 <= h2){
            for(int i = h2; i >= h1; i--){
                a[i][c1] = F[cnt];
                cnt++;
            }
            c1++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
