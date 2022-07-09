#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int num = n/6;
	    if(n%6 > 0){
	        num++;
	    }
	    cout<<(num*x)<<"\n";
	}
	return 0;
}