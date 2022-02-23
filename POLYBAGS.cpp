#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        int poly=n%10;
        if (poly==0) cout<<n/10<<endl;  
        else cout<<(n/10)+1<<endl;
	}
	return 0;
}
