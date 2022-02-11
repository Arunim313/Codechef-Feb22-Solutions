#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    scanf("%d %d",&n, &x);
	    if(x<=n) cout<<x<<endl;
	    else{
	        while(x>n)
	        x=x-n-1;
	        cout<<x<<endl;
	    }
	}
	return 0;
}
