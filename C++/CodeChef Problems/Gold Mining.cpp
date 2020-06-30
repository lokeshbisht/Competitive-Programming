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

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    
    cin>>test;
    
    while (test--) {
    	
    	ll n;
    	
    	cin>>n;
    	
    	double g;
    	double a;
    	double b;
    	
    	multimap<double, pair<double, double>, greater<double>> vals;
    	
    	loop (i, n) {
    		double aa, bb;
    		
    		cin>>g>>aa>>bb;
    		
    		a = g / aa;
    		b = g / bb;
    		
    		vals.insert({g, {a, b}});
		}
		
		double aa = 0;
		double bb = 0;
		
		for (auto it : vals) {
			double total = it.second.first + it.second.second;
			
			aa += (it.first * it.second.first) / total;
			bb += (it.first * it.second.second) / total;
		}
		
		
    	cout<<fixed;
    	cout<<setprecision(6);
		cout<<aa<<" "<<bb<<endl;
    }
}
