#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[1005][1005],n,m;
// tong tat ca cac phan tu cua hcn bat dau tu hang 1, ket
// thuc o hang i, bat dau tu cot 1 ket thuc o cot j
int prefix[1005][1005] = {0};


int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1]
            - prefix[i-1][j-1] + a[i][j];
        }
    }
    
    int q; cin >> q;
    while(q--){
        int x1,x2,y1,y2; cin >> x1 >> x2 >> y1 >> y2;
        int res = prefix[x2][y2] - prefix[x1-1][y2] 
                  - prefix[x2][y1-1] + prefix[x1-1][y1-1];
        cout << res << endl;
    }
    
}
