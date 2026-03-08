#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
    int arr[n];
    long double ans = 0.0;
	
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++){
	    ans += arr[i];
	}
	
	cout << (ans/(n*100) * 100) << endl;
	
	return 0;
	
}