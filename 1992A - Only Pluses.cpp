#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        
        int t;
        cin >> t;
        
        while(t--){
            
            vector<int> vec;
            
            for(int i = 0; i < 3; i++){
                int val;
                cin >> val;
                vec.push_back(val);
            }
            
            for(int i = 0; i<5; i++){
                sort(vec.begin(), vec.end());
                vec[0] += 1;
            }
            
            cout << vec[0] * vec[1] * vec[2] << endl;
            
        }
        
    return 0;
}