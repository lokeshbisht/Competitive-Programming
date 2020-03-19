#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

//function that finds the target in the given sorted array and returns its index. If target is not in array, it returns -1
int binarySearch(ll arr[], int n, int target) {
	int a = 0;
	int b = n - 1;
	
	while (a <= b) {
		int k = (a + b) / 2;
		if (arr[k] == target) {
			return k;
		}
		
		(arr[k] > target) ? b = k - 1 : a = k + 1;
	}
	return -1;
}

//function that finds the target in the given sorted array and returns its index. If target is not in array, it returns -1
int binarySearchWithJump(ll arr[], int n, int target) {
	
	int k = 0;
	
	for (int b = n/2; b >= 1; b /= 2) {
		while (k + b < n && arr[k + b] <= target) k += b;
	}
	
	if (arr[k] == target) {
		return k;
	}
	return -1;
}
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int n;
	
	cin>>n;
	
	ll arr[n];
	
	loop (i, n){
		cin>>arr[i];
	}
	
	ll target;
	
	cin>>target;
	
	int index;
	
	//index = binarySearch(arr, n, target);
	index = binarySearchWithJump(arr, n, target);
	
	if (index == -1) {
		cout<<"Element not found in array";
	} else {
		cout<<"Element found at index : "<<index;
	}
	return 0;
}
