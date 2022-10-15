#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int k = 0; k < m; k++)
    {
        int s, t;
        cin>>s>>t;
        int start=s-1;
        int end=t-1;
        int temp=0;
        if(s<t){
            for(int j=start; j<end; j++){
                if((arr[j]-arr[j+1])>=0 ){
                    temp+=(arr[j]-arr[j+1]);
                }
            }
            cout<<temp<<endl;
        }
        else{
            for(int j=start; j>end; j--){
                if((arr[j]-arr[j-1])>=0 ){
                    temp+=(arr[j]-arr[j-1]);
                }
            }
            cout<<temp<<endl;
        }
        
    }
}