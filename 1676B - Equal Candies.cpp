#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n, min, sum = 0;
        vector<int> vec;
        
        cin >> n;
        
        for(int i = 0; i<n; i++){
            int val;
            cin >> val;
            vec.push_back(val);
        }
        
        sort(vec.begin(), vec.end());
        
        min = vec[0];
        
        for(int i = 0; i<n; i++){
            sum += vec[i]-min;
        }
        
        cout << sum << endl;
    }
    
    return 0;
}