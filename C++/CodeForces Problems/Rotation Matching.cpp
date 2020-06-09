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
    
    ll n;
    
    cin>>n;
    
    ll arr[n];
    ll brr[n];
    
    ll indA[n + 1];
    ll indB[n];
    
    loop (i, n) {
    	cin>>arr[i];
    	indA[arr[i]] = i;
	}
	
	loop (i, n) {
    	cin>>brr[i];
    	indB[brr[i]] = i;
	}
	
	ll values[n];
	for (int i = 1; i <= n; i++) {
		ll val = indA[i] - indB[i];
		
		if (val < 0) {
			val += n;
		}
		values[i - 1] = val;
	}

	sort(values, values + n);
	
	ll ans = 0;
	ll max = 0;
	
	ll curr = values[0];
	max++;
	for (int i = 1; i < n; i++) {
		if (values[i] == curr) {
			max++;
		} else{
			curr = values[i];
			
			if (max > ans) {
				ans = max;
			}
			max = 1;
		}
	}
	
	if (max > ans) {
		ans = max;
	}
	
	cout<<ans<<endl;
}
