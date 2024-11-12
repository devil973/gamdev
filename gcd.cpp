#include<iostream>
#include<math.h>
using namespace std;
int gcd(int x, int y){
    if(x-y==0)return y;
    else return gcd(x-y,y);
}
// int gcd(int x, int y){
//     if(x==0||y==0)return y;
//     else return gcd(x%y,y);
// }
int main(){
    int x,y;
    cin>>x>>y;
    while(x>0&&y>0){
        if(x>y) x=x%y;
        else y=y%x;
    }
    if(x==0) cout<< y;
    else cout<<x;

}
// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout << gcd(x,y);

// }
// int main(){
//     int x, y;
//     cin>> x >> y;
//     int s=(y>x)?x:y;
//     int p=s;
//     for(int i=p;p>0;p--){
//         if(x%p==0 && y%p==0){
//             cout << p;
//             break;
//         }
//     }
// }
// int x, y,m,n;
//     cin>> m >> n;
//     int s=(y>x)?x:y;
//     while(1){
//         int o=n;
//         if(m%n==0){
//             cout << o;
//             break;
//         }
//         n=m%n;
//         m=o;
//     }