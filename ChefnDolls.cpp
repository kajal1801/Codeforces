#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int ans = -1;
	    sort(arr,arr+n);
	    for(int i = 0;i<n-1;i+=2){
	        if(arr[i] != arr[i+1]){
	            ans = arr[i];
	            break;
	        }
	    }
	    if(ans == -1){
	        ans = arr[n-1];
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
