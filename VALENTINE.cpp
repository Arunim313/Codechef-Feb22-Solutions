#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int sol=x/y;
        cout<<int(sol)<<endl;
    }
    return 0;
}