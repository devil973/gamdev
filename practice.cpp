#include<bits/stdc++.h>
using namespace std;
    int main(){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x%2!=0&&x!=0)cout<< "NO"<<endl;
            else if(x==0&&y%2!=0)cout<<"NO"<<endl;
            else cout<< "YES"<< endl;
        }
    }























    // int main(){
    //     int arr[10];
    //     for(int i=0;i<10;i++){
    //         cin >>arr[i];
    //     }
    //     for(int i=0;i<9;i++){
    //         int min=arr[i];
    //         for(int j=i;j<10;j++){
    //             if(arr[j]<arr[i]){
    //                 int temp=arr[j];
    //                 arr[j]=arr[i];
    //                 arr[i]=temp;
    //             }
    //         }
    //     }
    //     for(int i=0;i<10;i++){
    //         cout<< arr[i]<<endl;
    //     }
    //     return 0;
    // }

