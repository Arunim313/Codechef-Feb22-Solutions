#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(y==0)
	    printf("%d\n",x);
	    else if(x==y)
	    printf("%d\n",(2*x)-1);
	    else
	    printf("%d\n",x+y);
	}
	return 0;
}
