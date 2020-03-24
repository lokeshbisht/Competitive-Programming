#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        int n;
        
        cin>>n;
        
        int arr[n];
        int vrr[n] = {0};
        int brr[n];
        
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        
        for (int i = 0; i < n; i++) {
            
            for (int j = 0; j < n; j++) {
                
                if (arr[j] > arr[i]) {
                    vrr[i]++;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            brr[i] = vrr[i];
        }
        
        for (int i = 0; i < n; i++) {
            cout<<brr[i]<<" ";
        }
        cout<<endl;
    }
}
