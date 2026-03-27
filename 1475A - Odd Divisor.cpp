#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        int t;
        cin >> t;
        
        while(t--){
            int n, flag = 1;
            cin >> n;
            while(flag == 1) {
                if(n%2 != 0 && n != 1) {
                    flag = 0;
                    break;
                } else {
                    n /= 2; 
                    flag = 1;
                    if(n == 1) {
                        break;
                    }
                }
            }
            
            if(flag == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    return 0;
}