#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,m;
int a[105][105];
int dx[] = {-1,-1,-1,0,1,1,1,0};
int dy[] = {-1,0,1,1,1,0,-1,-1};

bool duyet(int i,int j){
    int target = a[i][j];
    // duyet cac dinh ke
    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m){
            if(a[i1][j1] >= target) return false;
        }
    }
    return true;
}

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(duyet(i,j)) cnt++;
        }
    }
    cout << cnt;
}
