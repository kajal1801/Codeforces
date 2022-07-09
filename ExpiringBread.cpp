#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    if((m*k) >= n){
	        cout<<"YES"<<"\n";
	    }
	    else{
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
