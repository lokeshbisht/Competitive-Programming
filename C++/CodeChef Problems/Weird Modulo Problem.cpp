#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        int n;
        
        cin>>n;
        
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        
        sort(arr, arr + n);
        
        int ans = arr[0] % arr[1];
        for (int i = 2; i < n; i++) {
            
            ans %= arr[i];
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
