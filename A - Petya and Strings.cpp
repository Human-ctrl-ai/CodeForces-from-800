#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	string s1, s2;
    
    cin >> s1;
    cin >> s2;
    
	for (int i = 0; i < s1.size(); i++) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

	if(s1 == s2) cout << 0 << endl;
	else if(s1 < s2) cout << -1 << endl;
	else cout << 1 << endl;
    
    return 0;
    
}
