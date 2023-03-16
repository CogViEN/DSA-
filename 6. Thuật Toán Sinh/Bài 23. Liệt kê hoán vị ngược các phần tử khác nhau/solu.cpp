#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,ok = 1;
int a[1005];


void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] < a[i+1]){
        i--;
    }
    if(i == 0){
        ok = 0; return;
    }
    int j = n;
    while(a[j] > a[i]) j--;
    swap(a[i],a[j]);
    reverse(a + i + 1, a + n + 1);
    
}

int main(){
    cin >> n;
    set<int> se;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int i = 1;
    n = se.size();
    for(auto it : se){
        a[i++] = it;
    }
    sort(a + 1, a + n + 1,greater<int>());
    while(ok){
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}
