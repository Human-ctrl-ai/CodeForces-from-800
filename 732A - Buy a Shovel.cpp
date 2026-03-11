#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int k, r;
        cin >> k >> r;
            for(int i = 1; i<=9; i++){
                if((k*i)%10 == 0){
                    cout << i << endl;
                    break;
                } else {
                
                    if((((k%10)*i)%10) == r){
                        cout << i << endl;
                        break;
                    }
                    
                }
            }
                
    return 0;
}