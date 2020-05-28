#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int test;
	
	cin>>test;
	
	while (test--) {
		
		int n;
		int q;
		
		cin>>n>>q;
		
		string s;
		
		cin>>s;
		
		int c;
		
		map<char, int> valMap;
		
		set<char> valSet;
		
		for (char c : s) {
		    valSet.insert(c);
			if (valMap.find(c) != valMap.end()) {
				valMap[c]++;
			} else{
				valMap[c] = 1;
			}
		}
		
		for (auto it : valMap) {
			cout<<it->first<<" "<<it->second<<endl;
		}
		
		for (int i = 0; i < q; i++) {
			
			int ans = 0;
			cin>>c;
			
			int distinct = valSet.size();
			
			for (auto it = valMap.begin(); it != valMap.end(); it++) {
				it->second -= c;
				
				if (it->second > 0) {
					ans += it->second;
				}
			}
			
			cout<<ans<<endl;
		}
	}
	
	return 0;
}
