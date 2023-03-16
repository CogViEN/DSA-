#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,s,t,u,v;
int a[105][105];
int dx[] = {-1,-2,-2,-1,1,2,2,1};
int dy[] = {-2,-1,1,2,2,1,-1,-2};

bool dfs(int s,int t){
    if(s == u && t == v){
        return true;
    }
    a[s][t] = 0;
    for(int k = 0; k < 8; k++){
        int s1 = s + dx[k];
        int t1 = t + dy[k];
        if(s1 >= 1 && s1 <= n && t1 >= 1 && t1 <= n
         && a[s1][t1] == 1){
             if(dfs(s1,t1)) return true;
         }
    }
    return false;
}

int main()
{
    cin >> n;
    cin >> s >> t >> u >> v;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    if(a[s][t] == 0 || a[u][v] == 0){
        cout << "NO";
        return 0;
    } 
    if(dfs(s,t)) cout << "YES";
    else cout << "NO";
    
}
