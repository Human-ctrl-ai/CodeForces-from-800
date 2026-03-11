#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int n, k, t, count = 0;
        cin >> n >> k;
        
        t = 240 - k;

        for(int i = 1; i<=n; i++){
            if(t >= (5*i)){
                t -= 5*i;
                count += 1;
                if (i == n){
                    cout << count << endl;
                    break;
                }
            } else{
                cout << count << endl;
                break;
            }
        }
        
        
    return 0;
}