#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    float mul=(0.143*n);
	    float x = pow(mul,n);
	    cout<<round(x)<<endl;
	}
	return 0;
}
