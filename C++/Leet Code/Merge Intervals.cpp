#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
		
	vector<vector<int>> res;
		
	multimap<int, int> intervalsMap;
		
	for (int i = 0; i < intervals.size(); i++) {
		intervalsMap.insert({intervals[i][0], intervals[i][1]});
	}

	int tempStart = intervalsMap.begin()->first;
	int tempEnd = intervalsMap.begin()->second;
		
	for (auto itr = intervalsMap.begin(); itr != intervalsMap.end(); ++itr) {
			
		if (itr->first <= tempEnd) {
			if (itr->second > tempEnd) {
				tempEnd = itr->second;	
			}
		} else {
			vector<int> row;
			row.push_back(tempStart);
			row.push_back(tempEnd);
			res.push_back(row);
			tempStart = itr->first;
			tempEnd = itr->second;
		}
	}
		
	vector<int> row;
	row.push_back(tempStart);
	row.push_back(tempEnd);
	res.push_back(row);
        
	return res;
}
	
int main() {
	
	int n;
	cin >> n;
	vector<vector<int>> nums;
	
	for (int i = 0; i < n; i++) {
		vector<int> arr(2);
		for (int j = 0; j < 2; j++) {
			cin>>arr[j];
		}
		nums.push_back(arr);
	}
	
	vector<vector<int>> result = merge(nums);
	
	for(int i = 0; i < n; i++) {
		int x = int(result[i].size());
		for(int j = 0; j < x; j++) {
			cout << result[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
