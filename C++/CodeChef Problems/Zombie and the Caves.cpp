#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int test;
	
	cin>>test;
	
	while (test--) {
		
		int n;
		
		cin>>n;
		
		int power[n+1], health[n+1];
		
		for (int i = 1; i <= n; i++) {
			cin>>power[i];
		}
		
		int maxHealth = 0;
		bool death = true;
		
		for (int i = 1; i <= n; i++) {
			cin>>health[i];
			
			if (health[i] > maxHealth) {
				maxHealth = health[i];
			}
		}
		
		int min[n+1] = {0};
		int max[n+1] = {0};
		
		for (int i = 1; i <= n; i++) {
			
			int minI = i - power[i]; 
			if (minI < 1) {
				minI = 1;
			}
			
			int maxI = i + power[i];
			if (maxI > n) {
				maxI = n;
			}
			min[i] = minI;
			max[i] = maxI;
		}
		
		map<pair<int,int>, int > countMap;
		
		for (int i = 1; i <= n; i++) {
			
			if (countMap.find(make_pair(min[i], max[i])) == countMap.end()) {
				countMap.insert(make_pair(make_pair(min[i], max[i]), 1));
			} else {
				countMap.find(make_pair(min[i], max[i]))->second++;
			}
		}
		
		int level[n+1] = {0};
		
		for (auto i = countMap.begin(); i != countMap.end(); i++) {
			
			level[(i->first).first] += i->second;
			
			if ((i->first).second < n) {
				level[(i->first).second + 1] -= i->second;
			}
		}
		
		for (int i = 2; i <= n; i++) {
			level[i] += level[i-1];
		}
			
		sort(health+1, health+n+1);
		sort(level+1, level+n+1);
		
		for (int i = 1; i <= n; i++) {
			if (health[i] != level[i]) {
				death = false;
				break;
			}		
		}
	
		if (death) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
