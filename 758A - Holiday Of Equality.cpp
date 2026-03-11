#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int n, ans = 0;
        cin >> n;
        
        vector<int> arr(n);
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n-1; i++){
                ans += arr[n-1] - arr[i];
        }
        
        cout << ans << endl;
        
    return 0;
}