#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,p,q,r;
	    cin>>a>>b>>c>>p>>q>>r;
	   // int votes = (q+b+c);
	    int winning = (p+q+r)/2;
	    if((p+b+c)>winning||(a+q+c)>winning||(a+b+r)>winning)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	    
	}
	return 0;
}
