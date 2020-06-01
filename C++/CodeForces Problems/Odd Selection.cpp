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
        ll n;
        ll x;
        
        cin>>n>>x;
        
        ll arr[n];
        
        ll odd = 0;
        ll even = 0;
        
        loop (i, n) {
        	cin>>arr[i];
        	
        	if (arr[i] % 2 == 0) {
        		even++;
			} else {
				odd++;
			}
		}
		
		if (odd == 0) {
			cout<<"No"<<endl;
			continue;
		}
		
		while (x > odd && even > 0) {
			x--;
			even--;
		}
		
		if (x % 2 == 0) {
			if (even > 0) {
				cout<<"Yes"<<endl;
			} else {
				cout<<"No"<<endl;
			}
		} else {
			cout<<"Yes"<<endl;
		}
    }
}
