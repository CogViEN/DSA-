#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool vowel(char c){
    return c == 'A' || c == 'E';
}

bool check(string s){
    for(int i = 1; i < s.size() - 1; i++){
        if(vowel(s[i]) && !vowel(s[i-1]) && !vowel(s[i+1]))
            return false;
    }
    return true;
}

int main(){
    char c; cin >> c;
    string s = "";
    for(char x = 'A'; x <= c; x++){
        s += x;
    }
    do{
        if(check(s)) cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));
}
