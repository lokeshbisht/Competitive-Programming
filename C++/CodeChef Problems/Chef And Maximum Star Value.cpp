#include <bits/stdc++.h>

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int test;
	
	cin>>test;
	
	while (test--) {
		
		int n;
		
		cin>>n;
		
		int arr[n];
		
		for (int i = 0; i < n; i++) {
			cin>>arr[i];
		}
		
		int max = 0;
		
		int fact[1000001] = {0};
		
		for (int i = 0; i < n; i++) {
			
			max = (fact[arr[i]] > max) ? fact[arr[i]] : max;
			
			for (int j = 1; j <= sqrt(arr[i]); j++) {
				
				if (arr[i] % j == 0) {

					fact[j]++;
					
					if (arr[i] / j != j) {
						fact[arr[i] / j]++;
					}
				}
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
