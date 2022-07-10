#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    int arr[n];
	    int p[n+1];
        fill(p,p+n+1,0);
	    for(i = 0;i<n;i++){
	        cin>>arr[i];
	        p[arr[i]] += 1;
	    }
	    bool f = true;
	    for(i = 2;i<=n;i++){
	        if(p[i]%i != 0){
	            f = false;
	            break;
	        }
	    }
	    if(f){
	        cout<<"YES"<<"\n";
	    }
	    else{
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
