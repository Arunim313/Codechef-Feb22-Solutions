#include <iostream>
using namespace std;

int main(){
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int pages=n*1000;
        cout<<pages/100<<endl;
    }
    return 0;
}