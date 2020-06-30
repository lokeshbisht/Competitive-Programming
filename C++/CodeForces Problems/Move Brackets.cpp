#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<string> VS;
typedef vector<P> VP;
typedef vector<V> VV;
typedef map<ll,ll> MP;
typedef multimap<ll,ll> MMP;
typedef set<ll> SET;
typedef multiset<ll> MSET;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define deb(x) cout << #x << "=" << x << endl
#define PI 3.1415926535897932384626

bool isValid(string expr) {
    stack<char> s; 
    char x;
    
    for (ll i = 0; i < expr.length(); i++) {
        if (expr[i] == '(') {
            s.push(expr[i]); 
            continue; 
        }
        
        if (s.empty()) {
           return false;
		}
  
        if (expr[i] == ')') {
            x = s.top();
            s.pop();
        }
    }
    
    return (s.empty()); 
} 

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
    	
		ll open = 0;
		ll ans = 0;
		for (char c : s) {
			if (c == ')') {
				if (open == 0) {
					ans++;
				} else {
					open--;
				}
			} else {
				open++;
			}
		}
		cout<<ans<<endl;
	}
}
