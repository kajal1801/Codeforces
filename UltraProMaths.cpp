#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    string res = "";
    for(int i = 0;i<s1.length();i++){
        if(s1[i] != s2[i]){
            res = res + '1';
        }
        else{
            res = res + '0';
        }
    }
    cout<<res<<"\n";
    return 0;
}