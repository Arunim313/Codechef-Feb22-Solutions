#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
        cin>>a>>b>>c;
        if(a<b && a<c) cout<<b+c<<endl;
        else if(b<c) cout<<a+c<<endl;
        else cout<<a+b<<endl;
	}
	return 0;
}
