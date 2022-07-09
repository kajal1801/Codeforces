#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, lucky = 0, unlucky = 0;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    if(a%2 == 0){
	        lucky++;
	    }
	    else{
	        unlucky++;
	    }
	}
	if(lucky > unlucky){
	    cout<<"READY FOR BATTLE"<<"\n";
	}
	else{
	    cout<<"NOT READY"<<"\n";
	}
	return 0;
}
