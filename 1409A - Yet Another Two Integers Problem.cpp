#include <bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        	int t;
        	cin >> t;
        	while (t--) {
        		int a, b;
        		cin >> a >> b;
        		cout << (abs(a - b) + 9) / 10 << endl;
        	}
        	
	return 0;
}