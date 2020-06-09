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
        
        string s;
        
        cin>>s;
        
        
        ll ans = 0;
        
        for (int i = 0; i < s.length() - 1; i++) {
        	if (s[i] == 'x' && s[i + 1] == 'y') {
        		ans++;
        		i++;
			} else if (s[i] == 'y' && s[i + 1] == 'x') {
        		ans++;
        		i++;
			}
		}
		
		cout<<ans<<endl;
    }
}
