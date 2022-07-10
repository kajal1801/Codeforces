#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    int diff = w2 - w1;
	    x1 = x1*m;
	    x2 = x2*m;
	    if(diff >= x1 && diff <= x2){
	        cout<<1<<"\n";
	    }
	    else{
	        cout<<0<<"\n";
	    }
	}
	return 0;
}
