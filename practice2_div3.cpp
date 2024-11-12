#include<bits/stdc++.h>
using namespace std;
 
int check_squareroot(int n) {
    for(int i = 1; i <= n; i++) {
        if(i * i == n) {
            return i;
        }
    }
    return 0;
}
 
int main() {
    int n;
    cin >> n;
    while(n--) {
        int length, k = 1, m = 1, count = 0;
        cin >> length;
        string square;
        cin >> square;
 
        int a = check_squareroot(length);
        if(a) {
            for(int j = 0; j < a; j++) {
                if(square[a*j] != '1' || square[a*j + a - 1] != '1') {
                    k = 0;
                    break;
                }
            }
 
            for(int l = 0; l < a; l++) {
                if(square[l] != '1' || square[length - l - 1] != '1') {
                    m = 0;
                    break;
                }
            }
 
            for(int b = 0; b < length; b++) {
                if(square[b] == '1') {
                    count++;
                }
            }
 
            if(k && m && count == 4 * (a - 1)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
}