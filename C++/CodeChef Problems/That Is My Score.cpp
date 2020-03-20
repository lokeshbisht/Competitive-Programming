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
        
        int arr[8] = {0};
        
        int qs, sc;
        loop (i, n) {
            
            cin>>qs>>sc;
            
            if (qs <= 8) {
                if (arr[qs - 1] < sc) {
                    arr[qs - 1] = sc;
                }
            }
        }
        
        int sum = 0;
        loop (i, 8) {
            sum += arr[i];
        }
        
        cout<<sum<<endl;
    }
}
