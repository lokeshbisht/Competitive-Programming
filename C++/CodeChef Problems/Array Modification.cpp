#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int test;
	
	cin>>test;
	
	while (test--) {
		
		ll n, k;
		
		cin>>n>>k;
		
		int arr[n];
		
		for (int i = 0; i < n; i++) {
			cin>>arr[i];
		}
		
		ll times = k / n;
		ll rem = k % n;
		
		if (n % 2 != 0 && times >= 1) {
			arr[n/2] = 0;
		}
		
		for (int i = 0; i < n/2; i++) {
			
			int a = arr[i];
			int b = arr[n - i -1];
			
			int c = a ^ b;
			
			if (times % 3 == 1) {
				arr[i] = c;
				arr[n - i - 1] = a;
			} else if (times % 3 == 2) {
				arr[i] = b;
				arr[n - i - 1] = c;
			}
 		}
 		
 		for (int i = 0; i < rem; i++) {
 			
 			int a = arr[i];
			int b = arr[n - i -1];
			
			int c = a ^ b;
			
			arr[i] = c;
		}
		
		for (int i = 0; i < n; i++) {
			
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
