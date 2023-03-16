#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define endl '\n'
#define fi first
#define se second
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define pb push_back

int main(){
	int n, m, p;
    cin >> n >> m >> p;
    int a[n][m],b[m][p];
    ll c[n][p];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            cin >> b[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            c[i][j] = 0;
            for(int k = 0; k < m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

