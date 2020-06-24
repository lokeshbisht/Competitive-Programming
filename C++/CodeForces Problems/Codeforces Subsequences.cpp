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
    cout.tie(NULL);
    
    ll k;
        
    cin>>k;
        
    string s = "codeforces";
    
    ll arr[10];
    
    for (int i = 0; i < 10; i++) {
    	arr[i] = 1;
	}
    
    ll prod = 1;
    
	while (prod < k) {
    	for (int i = 0; i < 10; i++) {
    		arr[i]++;
    		prod *= arr[i];
    		prod /= arr[i] - 1;
    		if (prod >= k) {
    			break;
			}
		}
	}
	
	string ans = "";
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < arr[i]; j++) {
			ans += s[i];
		}	
	}
	
	cout<<ans<<endl;
}
