#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        
        int t;
        cin >> t;
        
        while(t--){
            
            vector<int> vec;
            
            for(int i = 0; i<4; i++){
                int val;
                cin >> val;
                vec.push_back(val);
            }
            
            sort(vec.begin(), vec.end());
            
            if(vec[0] == vec[3]){
                cout << "YES" << endl;
            } else{
                cout << "NO" << endl;
            }
        }
        
    return 0;
}