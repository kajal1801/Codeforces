#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int total = n*50;
	    long long int profit = 30*total/100;
	    cout<<profit<<"\n";
	}
	return 0;
}