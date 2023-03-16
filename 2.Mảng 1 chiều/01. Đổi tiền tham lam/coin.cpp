#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define endl '\n'
#define fi first
#define se second
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define pb push_back

int main(){
	int a[] = { 1,2,5,10,20,50,100,200,500 ,1000};
    ll n;
    cin >> n;
    ll cnt = 0;
    for (int i = 9; i >= 0; i--)
    {
            cnt += n / a[i];
            n %= (a[i] * 1ll);
    }
    cout << cnt;
}

