#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y-x > 0){
	        cout<<(y-x)<<"\n";
	    }
	    else{
	        cout<<0<<"\n";
	    }
	}
	return 0;
}
