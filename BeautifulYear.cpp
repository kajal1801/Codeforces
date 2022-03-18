#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool f = false;
    while(!f){
        n++;
        int a = n%10, b = (n%100) /10, c = (n%1000)/100, d = n/1000;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            f = true;
            break;
        }
    }
    if(f){
        cout<<n<<endl;
    }
}