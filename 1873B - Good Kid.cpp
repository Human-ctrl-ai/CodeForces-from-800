#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int t;
        cin>>t;
        while(t--){
            int n, m = 1;
            vector<int> vec;
            
            cin >> n;
            
            for(int i = 0; i < n; i++){
                int v;
                cin >> v;
                vec.push_back(v);
            }
            
            sort(vec.begin(), vec.end());
            
            vec[0] += 1;
            
            for(int i = 0; i<n; i++){
                m *= vec[i];
            }
            
            cout << m << endl;
        
        }
    return 0;
}