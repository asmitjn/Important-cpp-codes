#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int arr[3];
        // cin>>x>>a>>b>>c;
        for(int i=0; i<3; i++){
            // int a;
            cin>>arr[i];
        }
        if(arr[x-1]!=0 && arr[(arr[x-1])-1]!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}