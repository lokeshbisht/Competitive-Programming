#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

vector< vector<ll> > findPermutationsUsingSTL(ll arr[], int n) {
	
	vector< vector<ll> > permutations;
	
	sort(arr, arr + n);

	vector<ll> permutation;
	
	do {
		permutation.clear();
		loop (i, n) {
			permutation.push_back(arr[i]);
		}
		permutations.push_back(permutation);
	} while (next_permutation(arr, arr + n));
	
	return permutations;
}

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int n;
	
	cin>>n;
	
	ll arr[n];
	
	loop (i, n){
		cin>>arr[i];
	}
	
	vector< vector<ll> > permutations = findPermutationsUsingSTL(arr, n);
	
	cout<<"All the permutations of the given set are :\n";
	
	for (auto permutation : permutations) {
		
		for (auto i : permutation) {
			
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
