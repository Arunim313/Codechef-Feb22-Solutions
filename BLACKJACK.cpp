#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int c=21-(a+b);
	    if(c<=10) cout<<c<<endl;
	    else cout<<"-1\n";
	}
	return 0;
}
