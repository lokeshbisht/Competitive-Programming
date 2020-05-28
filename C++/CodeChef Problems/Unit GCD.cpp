#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

const int N = 1000001;

bool prime[N];

void sieveOfEratosthenes() 
{
    memset(prime, true, sizeof(prime));
  
    for (ll p = 2; p*p <= N; p++) {
        if (prime[p] == true) 
        { 
            for (ll i = p * 2; i <= N; i += p) {  
                prime[i] = false; 
            }
        } 
    } 
} 

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    sieveOfEratosthenes();
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        bool read[N];
        memset(read, 0, sizeof(read));
        
        ll n;
        
        cin>>n;
        
        ll size = n / 2;
        vector< vector<ll> > res(size);
        
        vector<ll> vec;
        vec.push_back(1);
        read[1] = 1;
        
        for (ll i = 2; i <= n; i++) {
            if (prime[i]) {
                vec.push_back(i);
                read[i] = 1;
            }
        }
        
        res[0] = vec;
        
        ll index = 1;
        for (ll i = 4; i <= n; i += 2) {
            res[index] = vector<ll>(1); 
            res[index++][0] = i;
        }
        
        index = 1;
        for (ll j = res[index][0] + 1; j <= n; j += 2) {
            if (!prime[j] && !read[j] && (__gcd(res[index][0], j) == 1)) {
                res[index].push_back(j);
                index++;
                read[j] = 1;
            }
        }
        
        cout<<res.size()<<endl;
        for (auto i : res) {
            cout<<i.size()<<" ";
            for (auto j : i) {
            	if (j != 0) {
                	cout<<j<<" ";
                }
            }
            cout<<endl;
        }
    }
}
