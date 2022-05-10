#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q;
    cin>>n;
    int a[n+1];
    cin>>p;
    for(int i =0;i<p;i++){
        int m;
        cin>>m;
        a[m]++;
    }
    cin>>q;
    for(int i =0;i<q;i++){
        int m;
        cin>>m;
        a[m]++;
    }
    bool flag = true;
    for(int i = 1;i<=n;i++){
        if(a[i]==0){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"I become the guy.\n";
    }
    else{
        cout<<"Oh, my keyboard!\n";
    }
}
