#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int fs = 0, ls = 0, c = 0;
        while(a!=0){
            if(c < 3){
                ls += (a%10);
                a/=10;
                c++;
            }
            else{
                fs += (a%10);
                a/=10;
            }
        }
        if(ls == fs){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}