#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> arr(t);
    
    for(int i = 0; i<t; i++){
        cin >> arr[i];
    }
    
    for(long int i = 0; i<t; i++){
        if (arr[i]%2 == 0){
            cout << arr[i]/2 - 1 << endl;
        } else {
            cout << arr[i]/2 << endl;
        }
    }
    
    return 0;
}