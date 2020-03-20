#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

int main() {
    
    int arr[129] = {0};
    int cur;
    bool occur = false;
    int ins;
    arr[1] = 0;
    arr[2] = 0;
    
    for (int i = 2; i < 128; i++) {
        
        occur = false;
        cur = arr[i];
        
        for (int j = i - 1; j > 0; j--) {
            
            if (arr[j] == cur) {
                occur = true;
                ins = i - j;
                break;
            }
        }
        
        if (occur) {
            arr[i + 1] = ins;
        } else {
            arr[i + 1] = 0;
        }
    }
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        int n;
        
        cin>>n;
        
        int cnt = 0;
        
        for (int i = 1; i <= n; i++) {
            if (arr[i] == arr[n]) {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}
