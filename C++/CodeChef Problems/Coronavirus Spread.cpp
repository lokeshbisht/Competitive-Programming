#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int test;
	
	cin>>test;
	
	while (test--) {
		
		int n;
		
		cin>>n;
		
		int arr[n];
		
		for (int i = 0; i < n; i++) {
			cin>>arr[i];
		}
		
		vector<int> poss;
		
		int curr = 1;
		
		for (int i = 0; i < n - 1; i++) {
			if (arr[i + 1] - arr[i] <= 2) {
				curr++;
			} else {
				poss.push_back(curr);
				curr = 1;
			}
		}
		
		if (curr != 0) {
			poss.push_back(curr);
		}
		
		sort(poss.begin(), poss.end());
		
		int minVal = poss[0];
		
		int maxVal = poss.back();
		
		cout<<minVal<<" "<<maxVal<<endl;
	}
	return 0;
}
