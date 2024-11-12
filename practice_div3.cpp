#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
#define ll long long 
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll x,y;
        cin>>x>>y;
        vector<ll> arr(x);
        vector<ll> arr1(y);
        for(int i=0;i<x;i++){
            cin>>arr[i];
        }
        for(int i=0;i<y;i++){
            cin>>arr1[i];
        }
        unordered_map<ll,ll> a;
        for(int i=1;i<=x;i++){
            a[((x-i)*(i)+i-1)]++;
        }
        for(int i=0;i<x-1;i++){
            a[(i+1)*(x-i-1)]+=arr[i+1]-arr[i]-1;
        }
        for(int i=0;i<y;i++){
            cout<<a[arr1[i]]<<" " ;
        }
        cout<<endl;
    }
}