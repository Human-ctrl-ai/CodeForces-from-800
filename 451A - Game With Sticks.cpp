#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
            int n, m;
            
            cin >> n >> m;
            
            if(n < m) {
                if(n%2 != 0) {
                    cout << "Akshat" << endl;
                } else {
                    cout << "Malvika" << endl;
                }
            } else {
                if(m%2 != 0) {
                    cout << "Akshat" << endl;
                } else {
                    cout << "Malvika" << endl;
                }
            }
        
    return 0;
}