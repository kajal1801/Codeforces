#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int arr[a];
        for(int i = 0;i<a;i++){
            cin>>arr[i];
        }
        sort(arr, arr+a);
        int sum = 0;
        for(int i = 1;i<a;i++){
            sum = sum + (arr[i] - arr[0]);
        }
        cout<<sum<<"\n";
    }
    return 0;
}