#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(v) v.begin(), v.end()
#define l1(i,a,b) for(int i = a; i < b; i++)
#define l2(i,a,b) for(int i = a; i > b; i--)
#define vi vector<int>

int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        int t;
        cin >> t;
        
        while(t--) {
            
            int n;
            vi qvec;
            vi avec;
            
            cin >> n;
            
            l1(i,0,n) {
                int v;
                cin >> v;
                qvec.pb(v);
            }
            
            sort(all(qvec));
            
            if(qvec[0] == qvec[n - 1]) {
                cn;
                continue;
            } else {
                
                int i = 0;
                while(avec.size() <= n) {
                    avec.pb(qvec[n - i - 1]);
                    avec.pb(qvec[0 + i]);
                    i += 1;
                    
                }
                
                cy;
                l1(i,0,n){
                    cout << avec[i] << " ";
                }
                
                cout << endl;
            
            }
            
        }
        
    return 0;
        
}
