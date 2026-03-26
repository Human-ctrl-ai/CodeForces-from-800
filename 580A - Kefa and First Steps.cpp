#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        int n, count = 1;
        vector<int> vec;
        vector<int> cvec = {0};
        
        cin >> n;
        
        for(int i = 0; i < n; i++) {
            int v;
            cin >> v;
            vec.push_back(v);
        }
        
        for(int i = 1; i < n; i++) {
            if(vec[i] >= vec[i - 1]) {
                count += 1; 
            } else {
                cvec.push_back(count);
                count = 1;
            }
        }
        
        sort(cvec.begin(), cvec.end());
        
        if(count >= cvec[cvec.size() - 1]) {
            cout << count << endl;
        } else {
            cout << cvec[cvec.size() - 1] << endl;
        }
        
    return 0;
    
}