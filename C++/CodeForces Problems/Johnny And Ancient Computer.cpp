#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<string> VS;
typedef vector<P> VP;
typedef vector<V> VV;
typedef map<ll,ll> MP;
typedef set<ll> SET;
typedef multiset<ll> MSET;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define pb push_back;
#define mp make_pair;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        ll a;
        ll b;
        
        cin>>a>>b;
        
        ll aFirst;
		ll bFirst;
		
		if (a == b) {
			cout<<0<<endl;
			continue;
		}
		        
        for (ll i = 63; i >= 0; i--) { 
        	ll k = a >> i; 
        	if (k & 1) {
        		aFirst = i;	
        		break;
			}
		}
		
		for (ll i = 63; i >= 0; i--) { 
        	ll k = b >> i; 
        	if (k & 1) {
        		bFirst = i;	
        		break;
			}
		}
		
		bool poss = true;
		
		ll i = aFirst, j = bFirst;
		
		while (i >= 0 || j >= 0) {
			
			ll k = (a >> i) & 1;
			ll l = (b >> j) & 1;
			
			if (i < 0) {
				k = 0;
			}
			
			if (j < 0) {
				l = 0;
			}
			
			if (k != l) {
				poss = false;
				break;
			}
			
			i--;
			j--;
		}
		
		if (poss) {
			ll count = 0;
		
			ll diff = abs(aFirst - bFirst);
			
			while (true) {
				
				if (diff <= 3) {
					count++;
					break;
				}
				count++;
				diff -= 3;
			}
			cout<<count<<endl;
		} else {
			cout<<-1<<endl;
		}
    }
    return 0;
}
