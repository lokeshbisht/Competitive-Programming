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
    
        ll n;
        
        cin>>n;
        
        ll arr[n];
        
        loop (i, n) {
        	cin>>arr[i];
		}
		
		bool poss = true;
		
		set<int> used;
		
		used.insert(arr[0]);
		map<int, int> freq;
		
		for (int i = 1; i < n; i++) {
			
			if (freq.find(arr[i]) != freq.end()) {
				freq[arr[i]]++;
			} else {
				freq[arr[i]] = 1;
			}
			if (arr[i] != arr[i - 1]) {
				if (used.find(arr[i]) != used.end()) {
					poss = false;
					break;
				} else {
					used.insert(arr[i]);
				}
			}
		}
		
		set<int> freqSet;
		
		for (auto it = freq.begin(); it != freq.end(); it++) {
			if (freqSet.find(it->second) != freqSet.end()) {
				poss = false;
				break;
			} else {
				freqSet.insert(it->second);
			}
		}
		
		if (poss) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
    }
}
