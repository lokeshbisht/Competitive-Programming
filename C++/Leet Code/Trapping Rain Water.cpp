#include <bits/stdc++.h>

using namespace std;

int trap(vector<int>& height) {
	
	int ans = 0;
	int size = height.size();
	int heighestLeft[size];
	int heighestRight[size];

	heighestLeft[0] = height[0];

	for (int i = 1; i < size; i++) {
		heighestLeft[i] = max(heighestLeft[i - 1], height[i]);
	}
		
	heighestRight[size - 1] = height[size - 1];

	for (int i = size - 2; i >= 0; i--) {
		heighestRight[i] = max(heighestRight[i + 1], height[i]);
	}
		
	for (int i = 0; i < size; i++) {
		ans += min(heighestLeft[i], heighestRight[i]) - height[i];
	}

	return ans;
	    
}
int main() {
	int n;
	cin >> n;
	vector<int> heights;
	
	heights.resize(n);
	
	for(int i = 0; i < n; i++) {
		cin >> heights[i];
	}
	
	int result = trap(heights);
	cout << result;
	return 0;
}

