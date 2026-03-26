#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int n, stolen = 0, sum = 0, count = 0;
        vector<int> vec;
        
        cin >> n;
        for(int i = 0; i < n; i++) {
            int v;
            cin >> v;
            vec.push_back(v);
        }
        
        sort(vec.begin(), vec.end());
        
        for(int i = 0; i < n; i++) {
            sum += vec[i];
        }
        
        // cout << sum << endl;
        
        for(int i = n - 1; i >= 0; i--) {
            if(stolen > sum){
                cout << count << endl;
                return 0;
            } else {
                sum -= vec[i];
                stolen += vec[i];
                count += 1;
            }
        }
        
        cout << count << endl;
        
    return 0;
}