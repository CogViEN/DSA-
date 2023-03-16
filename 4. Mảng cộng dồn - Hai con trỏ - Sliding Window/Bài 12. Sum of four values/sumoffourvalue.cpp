#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n - 3; i++){
        for(int j = i + 1; j < n - 2; j++){
            int l = j + 1, r = n - 1;
            while(l < r){
                if(a[l] + a[r] < k - a[i] - a[j]) l++;
                else if(a[l] + a[r] > k - a[i] - a[j]) r--;
                else{
                    cout << "YES"; return 0;
                }
            }
        }
    }
    cout << "NO";
}
