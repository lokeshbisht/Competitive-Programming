#include <bits/stdc++.h>

using namespace std;

int nCube(int n, int arr[]) {
	int best = 0;
	
	for (int i = 0; i < n; i++) {
		
		for (int j = i; j < n; j++) {
			int sum = 0;
			
			for (int k = i; k <= j; k++) {
				sum += arr[k];
				cout<<sum<<" "<<arr[k]<<"\t";
			}
			cout<<endl;
			
			best = max(sum, best); 
			
			cout<<best<<endl;
		}
	}
	return best;
}

int nSquare(int n, int arr[]) {
	
	int best = 0;
	
	for (int i = 0; i < n; i++) {
		
		int sum = 0;
		
		for (int j = i; j < n; j++) {
			
			sum += arr[j];
			cout<<sum<<" "<<arr[j]<<"\t";
			best = max(sum, best);
		}
	}
	return best;
}

int onlyN(int n, int arr[]) {
	
	int best = 0, sum = 0;
	
	for (int i = 0; i < n; i++) {
		
		sum = max(arr[i], sum + arr[i]);
		best = max(sum, best);
	}
	return best;
}

int main() {
	
	int n;
	
	cin>>n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		
		cin>>arr[i];
	}
	
	//int best = nCube(n, arr);
	//int best = nSquare(n, arr);
	int best = onlyN(n, arr);
	
	cout<<best;
}
