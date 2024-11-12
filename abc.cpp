#include<bits/stdc++.h>
using namespace std;
void explain(){
    priority_queue<int>pq;
    pq.push(5);//{5}
    pq.push(3);//{5,3}
    pq.push(8);//{8,5,3}
    pq.push(10);//{10,8,5,3}
    cout<<pq.top();
    pq.pop();//{8,5,3}
}
void explain_map(){
    map<int,int>mpp;
    map<int,pair<int,int>>mpp;
    map<pair<int,int>,int>mpp;
    mpp[1]=2;
    mpp.emplaced({3,2});
    mpp.inserted({2,4}); 
    for(auto it:mpp){
        cout<< it.first<<" "<<it.second<<endl;
    }
    auto it=mpp.find(3);
    cout<< *(it).second;//2
}
// 5 7 3 8 4 3 8 4 67 9 44 99 4 6 8 4 7
//  {5,1},{7,2},{3,3}........ {67,8},{99,9}
// vec[n-2].second

int main(){
    explain();

}