#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        int t;
        cin >> t;
        
        while(t--) {
            
            int n, flag = 0;
            cin >> n;
            
            if(n < 2020) {
                flag = 0;
            } else if(n%2020 == 0) {
                flag = 1;
            } else if(n%2021 == 0) {
                flag = 1;
            } else {
                while(n > 2020) {
                    n -= 2021;
                    if(n%2020 == 0) {
                        flag = 1;
                        break;
                    } 
                }
            }
       
            
            if(flag == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }

    return 0;
}