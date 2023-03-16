#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<string> hv1, hv2;
int n,ok = 1;
string s;

void sinh(){
    int i = s.size()-1;
    while(i >= 0 && s[i] == ('0' + n)){
        s[i] = '1';
        i--;
    }
    if(i == -1){
        ok = 0; return;
    }
    s[i]++; 
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        s += char(i + 65);
    }
    do{
        hv1.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    s = string(n, '1');
    while(ok){
        hv2.push_back(s);
        sinh();
    }
    for(string x : hv1){
        for(string y : hv2){
            cout << x << y << endl;
        }
    }
}
