#include <bits/stdc++.h>

using namespace std;

vector<int> twoSumTwoPointerMethod(vector<int> nums, int target) {
	
	vector<int> ans;
	
	sort(nums.begin(), nums.end());
	
	int first;
	int second = nums.size() - 1;
	
	for (first = 0; first != second; first++) {
		if (nums[first] + nums[second] != target) {
			while (nums[first] + nums[second] >= target) {
				second--;
			}
		}
		if (nums[first] + nums[second] == target) {
			ans.push_back(first);
			ans.push_back(second);
			break;
		}
	}
	
	return ans;
}

int findRequiredElement(int value, int target) {
    	
   	return (target - value);
}

	
int checkForElement(vector<int>& nums, int current, int req) {
		
	for (int i = current + 1; i < nums.size(); i++) {
			
		if (nums[i] == req) {
			return i;
		}
	}
		
	return -1;
}

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v;
        
    for (int i = 0; i < nums.size(); i++) {
        	
    	int req = findRequiredElement(nums[i], target);
        	
       	int index = checkForElement(nums, i, req);
        	
       	if (index != -1) {
       		v.push_back(i);
       		v.push_back(index);
       		break;
		}
	}
        
    return v;
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
	
	//vector<int> result = twoSum(nums, target);
	vector<int> result = twoSumTwoPointerMethod(nums, target);
	
	if (result.size() == 0) {
		cout<<"No two element with given sum.";
	} else {
		for(int i = 0; i < result.size(); i++) {
			cout << result[i] << " ";
		}
	}
	
	return 0;
}
