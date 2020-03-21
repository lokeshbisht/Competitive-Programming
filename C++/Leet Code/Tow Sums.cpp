#include <bits/stdc++.h>

using namespace std;

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
    vector<int> v(2,0);
        
    for (int i = 0; i < nums.size(); i++) {
        	
    	int req = findRequiredElement(nums[i], target);
        	
       	int index = checkForElement(nums, i, req);
        	
       	if (index != -1) {
       		v[0] = i;
       		v[1] = index;
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
	
	vector<int> result = twoSum(nums, target);
	
	for(int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	} 
	
	return 0;
}
