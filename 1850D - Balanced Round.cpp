#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	
	int t;
	cin >> t;
	
	while(t--) {
	    
	    int n, k, count = 1;
	    vector<int> rvec;
	    vector<int> svec;
	    
	    cin >> n >> k;
	    
	    for(int i = 0; i < n; i++) {
	        int v;
	        cin >> v;
	        rvec.push_back(v);
	    }
	    
	    sort(rvec.begin(), rvec.end());
	    
	    if(n == 1) {
	        cout << 0 << endl;
	    } else {
	    
    	    for(int i = 0; i <= n - 2; i++) {
    	        if((rvec[i + 1] - rvec[i]) <= k) {
    	            count += 1;
    	            if(i == (n - 2)) {
    	                svec.push_back(count);
    	                break;
    	            }
    	        } else {
    	            svec.push_back(count);
    	            count = 1;
    	        }
    	    }
    	    
    	    sort(svec.begin(), svec.end());
    	    
    	    cout << n - svec[svec.size() - 1] << endl;
	    
	    }
	    
	}
	
    return 0;
}
