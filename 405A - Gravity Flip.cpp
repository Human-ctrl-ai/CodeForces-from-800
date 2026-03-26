#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int n;
        vector<int> vec;
        
        cin >> n;
        for(int i = 0; i<n; i++){
            int v; 
            cin >> v;
            vec.push_back(v);
        }
        
        sort(vec.begin(), vec.end());
        
        for(int i = 0; i<n; i++){
            cout << vec[i] << " ";
        }
        
        cout << endl;
    return 0;
}