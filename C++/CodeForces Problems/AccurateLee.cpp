#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define push_back pb
#define mp make_pair

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
       	
       	string s;
       	
       	cin>>s;
    
       	ll zero = 0;
       	ll ones = 0;
       	
       	string ans = "";
    	
		for (char c : s) {
			if (c == '0') {
				zero++;
			} else {
				break;
			}
		}
		
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == '1') {
				ones++;
			} else {
				break;
			}
		}
		
		bool pass = false;
		
		for (char c : s) {
			if (c == '1') {
				pass = true;
			}
			if (pass && c == '0') {
				zero++;
				break;
			}
		}

		while (zero--) {
			ans += '0';
		}
		
		while (ones--) {
			ans += '1';
		}
		
		cout<<ans<<endl;
    }
}
