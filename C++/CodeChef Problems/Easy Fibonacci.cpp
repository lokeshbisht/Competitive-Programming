#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
  
int main() {
	
	int test;
	
	cin>>test;
	
	while (test--) {
	    
	    ll n;
	    
	    cin>>n;
	    
	    ll num = 1;
	    
	    while (num * 2 <= n) {
	    	num *= 2;
		}
		
	    
	    ll f[60] = {0};
	    
	    f[0] = 0; 
        f[1] = 1; 
        
        for (ll i = 2; i <= 59; i++)  {
            f[i] = (f[i - 1] + f[i - 2]) % 10; 
	    }
	    
	    cout<<f[(num % 60) - 1]<<endl;
	}
	return 0;
}

