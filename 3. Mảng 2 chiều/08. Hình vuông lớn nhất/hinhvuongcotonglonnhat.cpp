#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int a[105][105];
int prefix[105][105] = {0};

int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] -
                            prefix[i-1][j-1] + a[i][j];
        }
    }
    int res = INT_MIN;
    for(int i = 1; i <= n - 2; i++){
        for(int j = 1; j <= n - 2; j++){
            int temp = prefix[i+2][j+2] - prefix[i-1][j+2]
                      - prefix[i+2][j-1] + prefix[i-1][j-1];
            res = max(res,temp);
        }
    }
    cout << res;
}
