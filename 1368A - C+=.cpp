#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        int t;
        cin >> t;
    
        while(t--){
            
            int a, b, n, count = 0;
            cin >> a >> b >> n;
            
            while(a <= n && b <= n) {
                if(a > b) {
                    b += a;
                    count += 1;
                } else {
                    a += b;
                    count += 1;
                }
            }
            
            cout << count << endl;
        }
    
    return 0;
}
