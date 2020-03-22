#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	
	cin>>t;
	
	for (int i = 0; i < t; i++) {
		
		int num;
	
		cin>>num;
		
		long coins[num];
		long sumBefore;
		double sumAfter;
		double numToRemove;
		double avgBefore;
		bool isPossible = false;
		
		sumBefore = 0;
		sumAfter = 0;
		
		for (int j = 0; j < num; j++) {
			cin>>coins[j];
			sumBefore += coins[j];
		}
		avgBefore = (double)sumBefore / num;
		sumAfter = (avgBefore * (num - 1));
		numToRemove = sumBefore - sumAfter;
		for (int k = 0; k < num; k++) {
			if (coins[k] == numToRemove) {
				cout<<k+1<<endl;
				isPossible = true;
				break;
			}
		}
		
		if (!isPossible) {
			cout<<"Impossible"<<endl;
		}
	}
}
