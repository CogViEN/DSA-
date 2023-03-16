#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);


int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    multiset<int> ms;
    for(int i = 0; i < k; i++){
        ms.insert(a[i]);
    }
    cout << *ms.begin() << " " << *ms.rbegin() << endl;
    int l = 0;
    for(int r = k; r < n; r++){
        multiset<int>::iterator it = ms.find(a[l]);
        ms.erase(it);
        l++;
        ms.insert(a[r]);
        cout << *ms.begin() << " " << *ms.rbegin() << endl;
    }
}
