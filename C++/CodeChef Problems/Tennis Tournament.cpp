#include <bits/stdc++.h>

using namespace std;

int findMatches(int n) {
    
    return ((n * (n-1)) / 2);
}
int main() {
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        int n;
        
        cin>>n;
        
        int numMatches = findMatches(n);
        
        if (numMatches % n != 0) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
            
            int wins = numMatches / n;
            
            char res[n][n];
            
            int count = 1;
            for (int i = 0; i < n; i++) {
                count = 1;
                for (int j = 0; j < n; j++) {
                    if (i == j) {
                        res[i][j] = '0';
                    } else {
                        if (j < i) {
                            if (res[j][i] == '1') {
                                res[i][j] = '0';
                            } else {
                                res[i][j] = '1';
                                count++;
                            }
                        } else if (count <= wins) {
                            res[i][j] = '1';
                            count++;
                        } else {
                            res[i][j] = '0';
                        }
                    }
                }
            }
            
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout<<res[i][j];
                }
                cout<<endl;
            }
        }
    }
    
    return 0 ;
}
