#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define push_back pb ;
#define mp make_pair;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<string> VS;
typedef vector<P> VP;
typedef vector<V> VV;
typedef map<ll,ll> MP;
typedef set<ll> SET;
typedef multiset<ll> MSET;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test;
    
    cin>>test;
    
    while (test--) {
    	
		ll n;
		
		cin>>n;
		
		ll arr[n];
		
		loop (i, n) {
			cin>>arr[i];
		}
		
		ll brr[n];
		
		loop (i, n) {
			cin>>brr[i];
		}
		
		bool sorted = true;
		
		for (int i = 0; i < n - 1; i++) {
			if (arr[i + 1] < arr[i]) {
				sorted = false;
				break;
			}
		}
		
		if (!sorted) {
			for (int i = 0; i < n - 1; i++) {
				if (brr[i + 1] != brr[i]) {
					sorted = true;
					break;
				}
			}
		}
		
		if (sorted) {
			cout<<"Yes"<<endl;
		} else {
		cout<<"No"<<endl;
		}
	}
}
