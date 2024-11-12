#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0)return 0;
    else if(n==1)return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;cin>>n;
    cout<<fibonacci(n);
}












// #include<bits/stdc++.h>
// u-sing namespace std;
// void rev_arr(int x, int y, char*arr){
//     if(x>=y)return;
//     swap(arr[x],arr[y]);
//     rev_arr(x+1,y-1,arr);      
// }
// int main(){
//     int n;cin>>n;
//     char arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     char temp[n];
//     strcpy(temp,arr);
//     rev_arr(0,n-1,arr); 
//     int count=1;
//     for(int i=0;i<n;i++){
//         if(temp[i]!=arr[i]){
//             count=0;
//             break;
//         }
//     }
//     if(count) cout<< "yes";
//     else cout<<"no";
// }