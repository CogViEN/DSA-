#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}

int main(){
    int n; cin >> n;
    pair<int,int> p[n];
    for(int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second;
    }
    sort(p,p+n,cmp);
    int end = p[0].second, cnt = 1;
    for(int i = 1; i < n; i++){
        if(p[i].first >= end){
            end = p[i].second;
            cnt++;
        }
    }
    cout << cnt;
}
