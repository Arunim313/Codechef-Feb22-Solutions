#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
		cin>>x;
		int carlsen=0, nchef=0, draw=0; 
	    char arr[14];
	    for(int i=0;i<14;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<14;i++){
			if(arr[i]=='C'||arr[i]=='c') carlsen+=2;
			else if(arr[i]=='N'||arr[i]=='n') nchef+=2;
			else { ++carlsen; ++nchef; ++draw;}
		}
		if(carlsen>nchef) cout<<60*x<<endl;
		else if(nchef>carlsen) cout<<40*x<<endl;
		else cout<<55*x<<endl;
			
	}
	return 0;
}
