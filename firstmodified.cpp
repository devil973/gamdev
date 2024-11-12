#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin>> x;
        string s;
        cin>> s;
        int count=0,flag=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')count++;
        }
        if(count>=x) count=x;
        flag=count;
        count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B')count++;
        }
        if(count>=x) count=x;
        flag+=count;
        count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='C')count++;
        }
         if(count>=x) count=x;
         flag+=count;
        count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='D')count++;
        }
        if(count>=x) count=x;
        flag+=count;
        count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='?')count++;
        }
        if(count==s.size()) cout<<0;
        cout<<flag<<endl;
    }
}