#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int test;
    
    cin>>test;
    
    while (test--) {
 		
		 int n;
		 
		 cin>>n;
		 
		 int type;
		 int a, b;
		 int fav, notFav;
		 
		 for (int i = 0; i < n; i++) {
		 	
			cin>>type>>a>>b;
			
			if (i == 0 && type == 2) {
				if (a == b) {
					cout<<"YES"<<endl;
					fav = a;
					notFav = b;
				} else {
				cout<<"NO"<<endl;
				}
			} else if (type == 1) {
				cout<<"YES"<<endl;
				fav = a;
				notFav = b;
			} else {
				if (a == b) {
					cout<<"YES"<<endl;
					fav = a;
					notFav = b;
				} else if (b < fav) {
					cout<<"YES"<<endl;
					fav = a;
					notFav = b;
				} else if (a < fav) {
					cout<<"YES"<<endl;
					fav = b;
					notFav = a;
				} else if (a < notFav) {
					cout<<"YES"<<endl;
					fav = a;
					notFav = b;
				} else if (b < notFav) {
					cout<<"YES"<<endl;
					fav = b;
					notFav = a;
				} else {
					cout<<"NO"<<endl;
				}
			}
		 }
    }
    return 0;
}
