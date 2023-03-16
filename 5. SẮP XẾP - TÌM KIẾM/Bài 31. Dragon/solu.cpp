#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first < b.first;
}

int main()
{
    int n, s; cin >> n >> s;
    pair<int,int> a[n];
    for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    sort(a,a + n, cmp);
    for(int i = 0; i < n; i++){
        if(a[i].first >= s){
            cout << "NO"; return 0;
        }
        s += a[i].second;
    }
    cout << "YES";
}
