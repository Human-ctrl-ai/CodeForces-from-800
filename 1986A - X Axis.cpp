#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        
        int t;
        cin >> t;
        
        while(t--){
            
            int sum = 0;
            vector<int> vec;
            
            for(int i = 0; i<3; i++){
                int val;
                cin >> val;
                vec.push_back(val);
            }
            
            sort(vec.begin(), vec.end());
            
            for(int i = 0; i<2; i++){
                sum += vec[i + 1] - vec[i];
            }
            
            cout << sum << endl;
            
        }
        
    return 0;
}