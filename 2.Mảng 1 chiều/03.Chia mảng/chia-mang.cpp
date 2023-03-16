#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


typedef long long ll;

int arr[100005];

int main()
{
    int n, k; cin >> n >> k;
    k = min(k,n-k);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll tong1 = 0, tong2 = 0;
    for (int i = 0; i < k; i++)
    {
        tong1 += (1ll*arr[i]);
    }
    for (int i = k; i < n; i++)
    {
        tong2 += (1ll*arr[i]);
    }
    cout << tong2 - tong1;
}
