#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll test;
    
    cin>>test;
    
    while (test--) {
    	
        ll n;
        
        cin>>n;
        
        ll arr[n];
        
        vector<int> even;
        vector<int> fours;
        
        loop (i, n) {
        	cin>>arr[i];
        	
        	if (arr[i] % 4 == 0) {
        		fours.push_back(i);
			} else if (arr[i] % 2 == 0) {
				even.push_back(i);
			}
		}
		
		ll ans = 0;
		
		auto itEven = even.begin();
		auto itFours = fours.begin();
		
		int nextFour;
		int nextEven;
		int secondNextEven;
		
		if (itEven != even.end()) {
			
			nextEven = *itEven;
			
			itEven++;
			if (itEven != even.end()) {
				secondNextEven = *itEven;
			} else {
				secondNextEven = n;
			}
		} else {
			nextEven = secondNextEven = n;
		}
		
		if (itFours != fours.end()) {	
			nextFour = *itFours;
		} else {
			nextFour = n;
		}
		
		for (int i = 0; i < n; i++) {
			if (i > nextFour) {
				if (itFours != fours.end()) {
					itFours++;
					if (itFours != fours.end()) {	
						nextFour = *itFours;
					} else {
						nextFour = n;
					}
				}
			}
			
			if (i > nextEven) {
				
				nextEven = secondNextEven;
				
				if (itEven != even.end()) {
					itEven++;
					if (itEven != even.end()) {
						secondNextEven = *itEven;
					} else {
						secondNextEven = n;
					}
				}
			}
			
			if (nextFour == i || nextEven >= nextFour) {
				
				ans += (n - i);
				continue;
			}
			
			ans += (nextEven - i);
			
			if (secondNextEven >= nextFour) {
				if (nextFour != n) {
					ans += (n - nextFour);
				}
			} else if (secondNextEven != n) {
				ans += (n - secondNextEven);
			}
		}
		
		cout<<ans<<"\n";
    }
}
