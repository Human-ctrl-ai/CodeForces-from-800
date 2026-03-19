#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int t;
        cin>>t;
        while(t--){
            
            int n, o_c = 0, t_c = 0;
            vector<int> vec;
            
            cin >> n;
            
            for(int i = 0; i < n; i++){
                int v;
                cin >> v;
                vec.push_back(v);
            }
            
            if(n%2 == 0){
                
                for(int i = 0; i < n; i++){
                    
                    if(vec[i] == 2){
                        t_c += 1;
                    } else {
                        o_c += 1;
                    }
                     
                }
                
                if (t_c%2 == 0 && o_c%2 == 0) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            
            } else {
                for(int i = 0; i < n; i++){
                    
                    if(vec[i] == 2){
                        t_c += 1;
                    } else {
                        o_c += 1;
                    }
                     
                }
                
                if (o_c%2 == 0 && o_c != 0) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
            
            
        }
    return 0;
}