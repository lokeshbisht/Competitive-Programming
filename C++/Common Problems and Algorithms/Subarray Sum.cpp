#include <bits/stdc++.h>

using namespace std;

int findSubarraySum(vector<int> nums, int first, int second) {
	
	int ans = 0;
	
	int fi = min(first, second);
	int se = max(first, second);
	
	for (int i = fi; i <= se; i++) {
		ans += nums[i];
	}
	return ans;
}

vector<int> subarraySumTwoPointerMethod(vector<int> nums, int target) {
	
	vector<int> ans;
	
	int first = 0;
	int second = 0;
	
	for (first = 0; first != nums.size(); first++) {
		
		if (findSubarraySum(nums, first, second) != target) {
			while (findSubarraySum(nums, first, second) > target) {
				second++;
			}
		}
		if (findSubarraySum(nums, first, second) == target) {
			int fi = min(first, second);
			int se = max(first, second);
	
			for (int i = fi; i <= se; i++) {
				ans.push_back(i);
			}
			break;
		}
	}

	return ans;
}

int main() {
	int n, target;
	cin >> n;
	vector<int> nums;
	
	nums.resize(n);

	for(int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	cin >> target;
	
	vector<int> result = subarraySumTwoPointerMethod(nums, target);
	
	if (result.size() == 0) {
		cout<<"No subarray with given sum.";
	} else {
		for(int i = 0; i < result.size(); i++) {
			cout << result[i] << " ";
		}
	}
	
	return 0;
}
