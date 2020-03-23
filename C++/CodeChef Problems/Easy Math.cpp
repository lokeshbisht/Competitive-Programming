#include <bits/stdc++.h>

using namespace std;

long sumOfDigits(long num) {
	
	vector<int> digits;
	
	while (num) {
		
		digits.push_back(num % 10);
		num /= 10;
	}
	
	long sum = 0;
	
	for (auto i = digits.begin(); i != digits.end(); i++) {
		sum += *i;	
	}
	
	return sum;
}
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
		
		long maxSum = 0;
		long curSum;
		
		for (int j = 0; j < n; j++) {
			
			for (int k = j + 1; k < n; k++) {
				
				curSum = sumOfDigits(arr[j] * arr[k]);
				
				if (curSum > maxSum) {
					
					maxSum = curSum;
				}
			}
		}
		
		cout<<maxSum<<endl;
		
	}
	return 0;
}
