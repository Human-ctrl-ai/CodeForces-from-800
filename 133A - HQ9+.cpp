#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        string s;
        int count = 0;
        
        cin >> s;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
                count += 1;
            }
        }
        
        if(count > 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    return 0;
}