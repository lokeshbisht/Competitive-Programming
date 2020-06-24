#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define push_back pb ;

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
    
    ll sum = 0;
    
    loop (i, n) {
    	cin>>arr[i];
    	
    	sum += arr[i];
	}
	
	MP mp;
	
	loop (i, n) {
		if (mp.find(arr[i]) == mp.end()) {
			mp[arr[i]] = 1;
		} else {
			mp[arr[i]]++;
		}
	}
	
	ll q;
	
	cin>>q;
	
	ll b, c;
	
	loop (i, q) {
		cin>>b>>c;
		
		if (mp.find(b) == mp.end()) {
			cout<<sum<<endl;
		} else {
			ll count = mp[b];
			
			mp[b] = 0;
			
			mp[c] += count;
			
			sum -= (b * count);
			sum += (c * count);
			
			cout<<sum<<endl;
		}
	}
}
