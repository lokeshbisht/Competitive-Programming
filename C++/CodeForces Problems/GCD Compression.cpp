#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
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

bool isPowerOfTwo(ll n) { 
    return (ceil(log2(n)) == floor(log2(n))); 
}

vector<int> wins;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
    int test;
    
    cin>>test;
    
    while (test--) {
        
       ll n;
       
       cin>>n;
       
       ll arr[n * 2];
       
       loop (i, n * 2) {
	   		cin>>arr[i];
	   }
	   
	   vector<int> odd;
	   vector<int> even;
	   
	   loop (i, n * 2) {
	   		if (arr[i] % 2 == 0) {
	   			even.push_back(i + 1);
		   	} else {
		   		odd.push_back(i + 1);
			}
	   }
	   
	   ll val = 0;
	   if (even.size() > 1) {
	   		for (int i = 0; i < even.size(); i+=2) {
	   			if (val >= n - 1 || i == even.size() - 1) {
	   				break;
				}
	   			cout<<even[i]<<" "<<even[i + 1];
	   			cout<<endl;
	   			val++;
			}
	   }
	   
	   if (odd.size() > 1) {
	   		for (int i = 0; i < odd.size(); i+=2) {
	   			if (val >= n - 1 || i == odd.size() - 1) {
	   				break;
				}
	   			cout<<odd[i]<<" "<<odd[i + 1];
	   			cout<<endl;
	   			val++;
			}
	   }
    }
}
