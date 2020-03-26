#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int test;
	
	cin>>test;
	
	for (int i = 0; i < test; i++) {
		
		int n, b;
		
		cin>>n>>b;
		
		int arr[n];
		
		for (int i = 0; i < n; i++) {
			cin>>arr[i];
		}
		
		int ans = 0;
		
		sort(arr, arr+n);
		
		for (int i = 0; i < n; i++) {
			if (b >= arr[i]) {
				ans++;
				b -= arr[i];
			}
		}
		
		cout<<"Case #"<<i+1<<": "<<ans<<endl;
	}
}
