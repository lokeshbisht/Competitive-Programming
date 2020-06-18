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
    
    int test;
    
    cin>>test;
    
    while (test--) {
    	ll n;
    	
    	cin>>n;
    	
    	ll arr[n];
    	
    	loop (i, n) {
			cin>>arr[i];
		}
		
		ll odd = 0;
		ll even = 0;
		
		loop (i, n) {
			if (i % 2 == 0) {
				if (arr[i] % 2 != 0) {
					odd++;
				}
			} else {
				if (arr[i] % 2 == 0) {
					even++;
				}
			}
		}
		
		if (odd == even) {
			cout<<odd<<endl;
		} else {
			cout<<-1<<endl;
		}
    	
	}
}


