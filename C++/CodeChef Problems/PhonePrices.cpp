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
		
		int n;
		
		cin>>n;
		
		int arr[n+1];
		
		for (int i = 1; i <= n; i++) {
			cin>>arr[i];
		}
		
		bool good;
		int count = 0;
		
		for (int i = 1; i <= n; i++) {
			
			good = true;
			for (int j = i - 1; j >= i - 5 && j > 0; j--) {
			    if (arr[j] <= arr[i]) {
			        good = false;
			        break;
			    }
			}
			
			if (good) {
			    count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
