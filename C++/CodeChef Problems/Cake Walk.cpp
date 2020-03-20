#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

bool isPowerOfTwo (ll x)  
{  
    return x && (!(x&(x-1)));  
}   

int findPower(ll value) {
    
    int res = 0; 
    
    while (value % 2 == 0) {
        
        value /= 2;
        res++;
    }
    return res; 
}
int main() {
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        ll n;
        
        cin>>n;
        
        ll temp = n;
        int zeroes = 0;
        
        while (temp % 10 == 0) {
            
            temp /= 10;
            zeroes++;
            
        }
        
        if (temp == 1) {
            cout<<"Yes"<<endl;
        } else if (isPowerOfTwo(temp)) {
            int power = findPower(temp);
            if (zeroes >= power) {
                cout<<"Yes"<<endl;
            } else {
                cout<<"No"<<endl;
            }
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
