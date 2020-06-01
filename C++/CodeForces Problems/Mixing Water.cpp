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
        double h, c, t;
        
        cin>>h>>c>>t;
        
        if (t == h) {
        	cout<<1<<endl;
		} else if (t == (h + c) / 2) {
			cout<<2<<endl;
		} else {
			double temp = (double)(2 * h + c);
        	double n = 3;
			double avg = temp / 3;
        	double diff = abs(t - avg);
        	double prevDiff;
        	
        	ll ans;
			while (true) {
				temp += (double)(c + h);
				n += 2;
				avg = temp / n;
				
				prevDiff = diff;
				diff = abs(t - avg);
				
				if (avg < t) {
					if (prevDiff < diff) {
						ans = n - 2;
					} else {
						ans = n;
					}
					break;
				}
			}
			cout<<ans<<endl;
		}
    }
}
