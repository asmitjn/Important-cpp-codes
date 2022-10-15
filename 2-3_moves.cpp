#include <bits/stdc++.h>
using namespace std;

// void check(int a){
//     int temp = a%3;
//     int ans; 
//     int ans2;
    
//     if(temp==1){
//         ans=(a/3)+2;
//     }
//     else if(temp==2){
//         ans=(a/3)+1;
//         ans2=a/2;
//     }
    
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a%3==0){
            cout<<a/3<<endl;
        }
        else if(a%2==0 && a<=4){
            cout<<a/2<<endl;
        }
        else{
            int temp;
            temp=a%3;
            int ans;
            if(temp==1){
                ans=(a/3)+2;
                // cout<<ans<<endl;
            }
            else{
                ans=((a/3)+1);
                // cout<<ans<<endl;
            }
        }
    }


    return 0;
}
