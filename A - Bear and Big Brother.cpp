#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int a, b, count = 0;
        
        cin >> a >> b;
        
        while(b >= a){
            count += 1;
            a *= 3;
            b *= 2;
        }
        
        cout << count << endl;
        
    return 0;
}