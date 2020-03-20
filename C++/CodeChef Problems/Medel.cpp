#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

int main() {
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        int n;
        
        cin>>n;
        
        int arr[n];
        
        int small = INT_MAX;
        int smallInd;
        int large = 0;
        int largeInd;
        for (int i = 0; i < n; i++) {
            
            cin>>arr[i];    
            
        }
        
        for (int i = 0; i < n; i++) {
            
            if (arr[i] > large) {
                
                large = arr[i];
                largeInd = i;
                
            }
            
            if (arr[i] < small) {
                
                small = arr[i];
                smallInd = i;
            }
        }
        
        if (smallInd > largeInd) {
            
            cout<<large<<" "<<small<<endl;
        } else {
            cout<<small<<" "<<large<<endl;
        }
    }
    
    return 0;
}
