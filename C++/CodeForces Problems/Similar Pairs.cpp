#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

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
       	
       	vector<ll> even;
       	vector<ll> odd;
       	
       	loop (i, n) {
       		ll a;
       		
       		cin>>a;
       		
       		if (a % 2 == 0) {
       			even.push_back(a);
			} else {
				odd.push_back(a);
			}
		}
		
		
		if (even.size() % 2 == 0) {
			cout<<"YES"<<endl;
		} else {
			bool poss = false;
			for (auto i : even) {
				for (auto j : odd) {
					if (abs(i - j) == 1) {
						poss = true;
						break;
					}
				}
			}
			if (poss) {
				cout<<"YES"<<endl;
			} else {
				cout<<"NO"<<endl;
			}
		}
		
    }
}
