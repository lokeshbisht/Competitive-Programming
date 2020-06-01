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
    
    int n;
    
    cin>>n;
    
    int arr[n];
    
    loop (i, n) {
        cin>>arr[i];
    }
    
    int ans = 0;
    
    for (int i = 30; i >= 1; i--) {
        int maxSum = 0;
        
        loop (j, n) {
            if (arr[j] > i) {
                maxSum = 0;
                continue;
            }
            
            maxSum += arr[j];
            maxSum = max(maxSum, 0);
            
            ans = max(ans, maxSum - i);
        }
    }
    
    cout<<ans<<endl;
}

