#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int t;
        
        cin>>t;
        while(t--){
            int v;
            cin >> v;
           int pw=1;
           vector<int>ans;         
           
           while(v>0){
              if(v%10!=0){
              ans.push_back((v%10)*pw);
              }
              pw*=10;
              v/=10;
           }
           cout << ans.size()<< endl;
           for(int i=0;i<ans.size();i++){
           cout<<ans[i]<<" " ;
           }
           cout<<endl;
        }
    return 0;
}