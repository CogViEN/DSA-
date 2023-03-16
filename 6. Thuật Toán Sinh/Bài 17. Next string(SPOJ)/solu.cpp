#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, ok = 1;
string s;

void sinh(){
    int i = n-1;
    while(i >= 0 && s[i] >= s[i+1]) i--;
    if(i == -1){
        ok = 0; return;
    }
    int j = n;
    while(s[j] <= s[i]) j--;
    swap(s[i],s[j]);
    reverse(s.begin()+i+1,s.end());
}


int main(){
    cin >> s;
    n = s.length()-1;
    sinh();
    if(ok == 0) cout << "NOT EXIST";
    else cout << s;
}
