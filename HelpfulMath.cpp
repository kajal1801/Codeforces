#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    vector <int>firstvec;
    for(int i=0;i<a.length();i++){
        if(isdigit(a[i])){
            firstvec.push_back(a[i]);
        }
    }
    sort(firstvec.begin(),firstvec.end());
    int j = 0;
    for(int i = 0;i<a.length();i++){
        if(isdigit(a[i])){
            a[i] = firstvec[j];
            j++;
        }
    }
    cout<<a<<endl;
    return 0;
}