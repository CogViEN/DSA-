#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define FORD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define endl '\n'
int n, k; 
multiset<int> low, high;
void ins(int val){
    int cur_median = *low.rbegin();
    if(val > cur_median){
        high.insert(val);
        if(high.size() > k/2){
            low.insert(*high.begin());
            high.erase(high.begin());
        }
    }
    else{
        low.insert(val);
        if(low.size() > (k+1)/2){
            high.insert(*low.rbegin());
            low.erase(low.find(*low.rbegin()));
        }
    }
}
void er(int val){
    if(high.find(val)!=high.end()) 
        high.erase(high.find(val));
    else low.erase(low.find(val));
    if(low.empty()){
        low.insert(*high.begin());
        high.erase(high.begin());
    }
}

int main(){
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    if(k == 1){
        for(int x : a) cout << x << " ";
        return 0;
    }
    low.insert(a[0]);
    for(int i = 1; i < k; i++){
        ins(a[i]);
    }
    cout << *low.rbegin() << " ";
    for(int i = k; i < n; i++){
//        if(k == 1){
//            ins(a[i]);
//            er(a[i-k]);
//        }
        er(a[i-k]);
        ins(a[i]);
        cout << *low.rbegin() << " ";
    }
    
}
















