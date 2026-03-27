#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
            int n, m, sum = 0;
            vector<int> rvec;
            
            cin >> n >> m;
            
            for(int i = 0; i < n; i++) {
                int v;
                cin >> v;
                rvec.push_back(v);
            }
            
            sort(rvec.begin(), rvec.end());
            
            for(int i = 0; i < m; i++) {
                if(rvec[i] < 0) {
                    sum += abs(rvec[i]);
                } else {
                    break;
                }
            }
            
            cout << sum << endl;
        
    return 0;
}