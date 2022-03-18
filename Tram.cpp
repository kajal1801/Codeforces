#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, curr = 0, res = 0;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        curr -= a;
        curr += b;
        res = max(res,curr);
    }
    cout<<res<<"\n";
    return 0;
}