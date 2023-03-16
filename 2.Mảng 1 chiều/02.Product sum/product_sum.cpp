#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

int arr[100005];
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll tong = 0;
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        tong = ((tong%mod) + ((1ll * arr[i] * i) % mod))%mod;
    }
    cout << tong;
}
