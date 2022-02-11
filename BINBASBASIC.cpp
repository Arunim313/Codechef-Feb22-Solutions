#include <iostream>
using namespace std;
int main(){
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int counter = 0;
        for(int i =0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                counter++;
            }
        }
            if(counter<=k){
                if(n%2==1) cout<<"YES\n";
                else if((k-counter)%2==0) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else cout<<"NO\n";
    }
return 0;
}