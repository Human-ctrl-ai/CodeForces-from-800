#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int t;
        cin>>t;
        while(t--){
            int v;
            cin >> v;
            cout << (v%10) + (v/10) << endl;
        }
        
    return 0;
}