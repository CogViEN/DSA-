#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[105][105],n;
int visited[105] = {0};

int main()
{
    map<int,int> mp;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(visited[a[i][j]] == 0){
                mp[a[i][j]]++;
                visited[a[i][j]] = 1;
            }
        }
        memset(visited,0,sizeof(visited));
    }
    bool check = false;
   for(map<int,int>::iterator it = mp.begin(); it != mp.end();
    ++it){
       if(it->second == n){
           cout << it->first << " ";
           check = true;
       }
   }
   if(!check) cout << "NOT FOUND";
}
