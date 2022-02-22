#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a+c)>b) cout<<a+c<<endl;
	    else cout<<b<<endl;
	}
	return 0;
}
