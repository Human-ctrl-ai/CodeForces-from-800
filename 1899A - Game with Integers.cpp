#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int t;
        cin>>t;
        
        while(t--){
            int n;
            cin >> n;
            
            if((n%3) != 0){
                cout << "First" << endl;
            } else {
                cout << "Second" << endl;
            }
        }
        
    return 0;
}