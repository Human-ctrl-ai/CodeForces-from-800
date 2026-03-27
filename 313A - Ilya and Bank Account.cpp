#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
            int n;
            
            cin >> n;
            
            if(n >= 0) {
                cout << n << endl;
            } else {
                n = abs(n);
                if((abs(n)/10) < ((((abs(n)/10)/10) * 10) + (abs(n)%10))) {
                    cout << ((abs(n)/10) * (-1))<< endl;
                } else {
                    cout << (((((abs(n)/10)/10) * 10) + (abs(n)%10)) * (-1)) << endl;
                }
            }
            
        
    return 0;
}