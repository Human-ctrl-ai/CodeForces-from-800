#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	string s;
	set<int> myset;
	
	cin >> s;
	
	for(int i = 0; i < s.size(); i++) {
	    myset.insert(s[i]);
	}
	
	if(myset.size()%2 != 0){
	    cout << "IGNORE HIM!" << endl;
	} else {
	    cout << "CHAT WITH HER!" << endl; 
	}
	
    
    return 0;
    
}
