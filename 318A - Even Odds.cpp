#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        int n, k;
        
        cin >> n >> k;
        
        if(k > ((n + 1)/2)) {
            cout << ((k - ((n + 1)/2)) * 2) << endl;
        } else {
            cout << (2 * k) - 1 << endl;
        }

    return 0;
}
    