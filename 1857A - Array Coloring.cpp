#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int t;
        cin>>t;
        while(t--){
            int n, sum = 0;
            cin >> n;
            
            int k[n];
            int a[] = {};
            int b[] = {};
            
            for(int i = 0; i<n; i++){
                cin >> k[i];
            }
            
            // cout << n << endl;
            // for(int i = 0; i<n; i++){
            //     cout << arr[i] << " ";
            // }
            
            // cout << endl;
            
            for(int i = 0; i<n; i++){
                sum += k[i];
            }
            
            // cout << sum << endl;
            
            if(sum%2 != 0){
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    return 0;
}