#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max=x;
        for(int i=0;i<n;i++){
            x+=arr[i];
            if(x>max) max=x;
        }
        cout<<max<<endl;
    }
    return 0;
}