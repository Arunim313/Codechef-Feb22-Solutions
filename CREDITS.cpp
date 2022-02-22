#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x>65) cout<<"OVERLOAD\n";
	    else if(x<35) cout<<"UNDERLOAD\n";
	    else cout<<"NORMAL\n";
	}
	return 0;
}
