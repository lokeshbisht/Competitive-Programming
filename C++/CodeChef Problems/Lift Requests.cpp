#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        ll n, q;
        
        cin>>n>>q;
        
        ll f[q];
        ll d[q];
        
        ll total = 0;
        
        loop (i, q) {
            cin>>f[i]>>d[i];
        }
        
        ll curr = 0;
        
        loop (i, q) {
            if (f[i] == curr) {
                total += abs(f[i] - d[i]);
            } else {
                total += abs(curr - f[i]);
                total += abs(f[i] - d[i]);
            }
            
            curr = d[i];
        }
        
        cout<<total<<endl;
    }
}
