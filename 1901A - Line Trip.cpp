#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, x, m;
        vector<int> vec;
        
        cin >> n >> x;
        
        vec.push_back(0);
        for(int i = 0; i < n; i++){
            int v;
            cin >> v;
            vec.push_back(v);
        }
        vec.push_back(x);
        
        m = 2 * (x - vec[vec.size() - 2]);
        
        for(int i = 1; i < vec.size() - 1; i++){
            if((vec[i] - vec[i - 1]) > m){
                m = (vec[i] - vec[i - 1]);
            }
        }
        
        cout << m << endl;
    }
        
    return 0;
}