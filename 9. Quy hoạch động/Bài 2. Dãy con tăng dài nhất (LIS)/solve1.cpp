#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> vt;
    vt.push_back(a[0]);
    int res = 0;
    for(int i = 1; i < n; i++){
        vector<int>::iterator it = lower_bound(vt.begin(), vt.end(), a[i]);
        int index = it - vt.begin();
        if(index == vt.size()){
            vt.push_back(a[i]);
        }
        else{
            vt.erase(vt.begin()+index);
            vt.insert(vt.begin()+index,a[i]);
        }
        res = max(res, (int)vt.size());
    }
    cout << res;
}

