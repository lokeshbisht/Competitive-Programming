#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define push_back pb ;
#define mp make_pair;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<string> VS;
typedef vector<P> VP;
typedef vector<V> VV;
typedef map<ll,ll> MP;
typedef set<ll> SET;
typedef multiset<ll> MSET;

bool twoInOneOperation(ll a1, ll a2, ll b1, ll b2) {
	
	if (a1 == a2 || b1 == b2) {
		return true;
	}
	
	ll aAdd = (a2 - a1);
	ll bAdd = (b2 - b1);
	
	if (aAdd == bAdd) {
		return true;
	}
	
	ll aMul = 1;
	ll bMul = 1;
	
	if (a1 != 0 && a2 % a1 == 0) {
		aMul = a2 / a1;
	}
	
	if (b1 != 0 && b2 % b1 == 0) {
		bMul = b2 / b1;
	}
	
	if (aMul != 1 && aMul == bMul) {
		return true;
	}
	
	return false;
}

bool threeInOneOperation(ll a1, ll a2, ll b1, ll b2, ll c1, ll c2) {
	
	ll aAdd = (a2 - a1);
	ll bAdd = (b2 - b1);
	ll cAdd = (c2 - c1);
	
	if (aAdd == bAdd && aAdd == cAdd) {
		return true;
	}
	
	ll aMul = 1;
	ll bMul = 1;
	ll cMul = 1;
	
	if (a1 != 0 && a2 % a1 == 0) {
		aMul = a2 / a1;
	}
	
	if (b1 != 0 && b2 % b1 == 0) {
		bMul = b2 / b1;
	}
	
	if (c1 != 0 && c2 % c1 == 0) {
		cMul = c2 / c1;
	}
	
	if (aMul != 1 && aMul == bMul && aMul == cMul) {
		return true;
	}
	
	return false;
}

bool threeInTwoOperation(ll a1, ll a2, ll b1, ll b2, ll c1, ll c2) {
	
	ll aAdd = (a2 - a1);
	ll bAdd = (b2 - b1);
	ll cAdd = (c2 - c1);
	
	if (twoInOneOperation(b1 + aAdd, b2, c1, c2)
			|| twoInOneOperation(b1, b2, c1 + aAdd, c2)
			|| twoInOneOperation(b1 + aAdd, b2, c1 + aAdd, c2)
			|| twoInOneOperation(a1 + bAdd, a2, c1, c2)
			|| twoInOneOperation(a1, a2, c1 + bAdd, c2)
			|| twoInOneOperation(a1 + bAdd, a2, c1 + bAdd, c2)
			|| twoInOneOperation(a1 + cAdd, a2, b1, b2)
			|| twoInOneOperation(a1, a2, b1 + cAdd, b2)
			|| twoInOneOperation(a1 + cAdd, a2, b1 + cAdd, b2)) {
		
		return true;
		
	}
	
	if (twoInOneOperation(b1, b2 - aAdd, c1, c2 - aAdd)
			|| twoInOneOperation(b1, b2 - aAdd, c1, c2)
			|| twoInOneOperation(b1, b2, c1, c2 - aAdd)
			|| twoInOneOperation(a1, a2 - bAdd, c1, c2 - bAdd)
			|| twoInOneOperation(a1, a2 - bAdd, c1, c2)
			|| twoInOneOperation(a1, a2, c1, c2 - bAdd)
			|| twoInOneOperation(a1, a2 - cAdd, b1, b2 - cAdd)
			|| twoInOneOperation(a1, a2, b1, b2 - cAdd)
			|| twoInOneOperation(a1, a2 - cAdd, b1, b2)) {
		
		return true;
		
	}
	
	ll aMul = 1;
	ll bMul = 1;
	ll cMul = 1;
	
	if (a1 != 0 && a2 % a1 == 0) {
		aMul = a2 / a1;
	}
	
	if (b1 != 0 && b2 % b1 == 0) {
		bMul = b2 / b1;
	}
	
	if (c1 != 0 && c2 % c1 == 0) {
		cMul = c2 / c1;
	}
	
	if (twoInOneOperation(b1 * aMul, b2, c1, c2)
			|| twoInOneOperation(b1, b2, c1 * aMul, c2)
			|| twoInOneOperation(b1 * aMul, b2, c1 * aMul, c2)
			|| twoInOneOperation(a1 * bMul, a2, c1, c2)
			|| twoInOneOperation(a1, a2, c1 * bMul, c2)
			|| twoInOneOperation(a1 * bMul, a2, c1 * bMul, c2)
			|| twoInOneOperation(a1 * cMul, a2, b1, b2)
			|| twoInOneOperation(a1, a2, b1 * cMul, b2)
			|| twoInOneOperation(a1 * cMul, a2, b1 * cMul, b2)) {
		
		return true;
		
	}
	
	if (aMul != 1 && aMul != 0) {
		if (b2 % aMul == 0
				&& c2 % aMul == 0
				&& twoInOneOperation(b1, b2 / aMul, c1, c2 / aMul)) {
			return true;
		}
	}
	
	if (bMul != 1 && bMul != 0) {
		if (a2 % bMul == 0
				&& c2 % bMul == 0
				&& twoInOneOperation(a1, a2 / bMul, c1, c2 / bMul)) {
			return true;
		}
	}
	
	if (cMul != 1 && cMul != 0) {
		if (a2 % cMul == 0
				&& b2 % cMul == 0
				&& twoInOneOperation(a1, a2 / cMul, b1, b2 / cMul)) {
			return true;
		}
	}
	
	
	if (aMul != 1 && aMul != 0) {
		if (b2 % aMul == 0 && b1 == (b2 / aMul) - cAdd
				|| (b2 - cAdd) % aMul == 0 && b1 == (b2 - cAdd) / aMul
				|| c2 % aMul == 0 && c1 == (c2 / aMul) - bAdd
				|| (c2 - bAdd) % aMul == 0 && c1 == (c2 - bAdd) / aMul) {
			return true;
		}
	}
	
	if (bMul != 1 &&  bMul != 0) {
		if (a2 % bMul == 0 && a1 == (a2 / bMul) - cAdd
				|| (a2 - cAdd) % bMul == 0 && a1 == (a2 - cAdd) / bMul
				|| c2 % bMul == 0 && c1 == (c2 / bMul) - aAdd
				|| (c2 - aAdd) % bMul == 0 && c1 == (c2 - aAdd) / bMul) {
			return true;
		}
	}
	
	if (cMul != 1 && cMul != 0) {
		if (b2 % cMul == 0 && b1 == (b2 / cMul) - aAdd
				|| (b2 - aAdd) % cMul == 0 && b1 == (b2 - aAdd) / cMul
				|| a2 % cMul == 0 && a1 == (a2 / cMul) - bAdd
				|| (a2 - bAdd) % cMul == 0 && a1 == (a2 - bAdd) / cMul) {
			return true;
		}
	}
	
	return false;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        ll p, q, r;
        
        cin>>p>>q>>r;
        
        ll a, b, c;
        
        cin>>a>>b>>c;
        
        if (p == a) {
        	
			if (q == b) {
				
				if (r == c) {	//p=a, q=b, r=c
					
					cout<<0<<endl;
					
				} else {	//p=a, q=b, r!=c
					
					cout<<1<<endl;
					
				}
			} else {
				
				if (r == c) {	//p=a, q!=b, r=c
					
					cout<<1<<endl;
					
				} else {	//p=a, q!=b, r!=c
					
					if (twoInOneOperation(q, b, r, c)) { //q and r can be converted to b and c in one operation
						
						cout<<1<<endl;
						
					} else {	//q and r cannot be converted to b and c in one operation
						
						cout<<2<<endl;
						
					}
				}
			}
		} else {
			
			if (q == b) {	
				
				if (r == c) {	//p!=a, q=b, r=c
					
					cout<<1<<endl;
					
				} else { //p!=a, q=b, r!=c
					
					if (twoInOneOperation(p, a, r, c)) { //p and r can be converted to a and c in one operation
						
						cout<<1<<endl;
						
					} else {	//p and r cannot be converted to a and c in one operation
						
						cout<<2<<endl;
						
					}
					
				}
				
			} else {	
				
				if (r == c) {	//p!=a, q!=b, r=c
						
					if (twoInOneOperation(p, a, q, b)) { //p and q can be converted to a and b in one operation
						
						cout<<1<<endl;
						
					} else {	//p and q cannot be converted to a and b in one operation
						
						cout<<2<<endl;
						
					}
					
				} else {	//p!=a, q!=b, r!=c
					if (threeInOneOperation(p, a, q, b, r, c)) { //three can be converted in one operation
						
						cout<<1<<endl;
						
					} else { //three cannot be converted in one operation
						
						if (twoInOneOperation(p, a, q, b) 
								|| twoInOneOperation(p, a, r, c) 
								|| twoInOneOperation(q, b, r, c)) {	// any two can be converted in one operation
							
							cout<<2<<endl;
							
						} else if (threeInTwoOperation(p, a, q, b, r, c)) {	//three cannot be converted in two operations
							
							cout<<2<<endl;
							
						} else {
							
							bool xEqual = false;
							bool yEqual = false;
                
                			ll eq11 = (b * p) - (a * q);
							ll eq12 = a - b;
                			
                			ll eq21 = (c * q) - (b * r);
							ll eq22 = b - c;
							
							ll eq31 = (p * c) - (a * r);
							ll eq32 = a - c;
							
                			if (eq12 && eq11 % eq12 == 0
									&& eq22 && eq21 % eq22 == 0
									&& eq32 && eq31 % eq32 == 0) {
                    			
								if (eq11 / eq12 == eq21 / eq22
										&& eq11 / eq12 == eq31 / eq32
										&& eq21 / eq22 == eq31 / eq32) {
                        			xEqual = true;
                        		}
                			}
                			
                			eq11 = a - b;
							eq12 = p - q;
                			
                			eq21 = b - c;
							eq22 = q - r;
							
							eq31 = a - c;
							eq32 = p - r;
							
                			if (eq12 && eq11 % eq12 == 0
									&& eq22 && eq21 % eq22 == 0
									&& eq32 && eq31 % eq32 == 0) {
                    			
								if (eq11 / eq12 == eq21 / eq22
										&& eq11 / eq12 == eq31 / eq32
										&& eq21 / eq22 == eq31 / eq32) {
                        			yEqual = true;
                        		}
                			}
                			
                			if (xEqual && yEqual) {
                				cout<<2<<endl;
							} else {
								
								bool xEqual = false;
								bool yEqual = false;
                
                				ll eq11 = (b * p) - (a * q);
								ll eq12 = p - q;
                			
                				ll eq21 = (c * q) - (b * r);
								ll eq22 = q - r;
							
								ll eq31 = (p * c) - (a * r);
								ll eq32 = p - r;
							
                				if (eq12 && eq11 % eq12 == 0
										&& eq22 && eq21 % eq22 == 0
										&& eq32 && eq31 % eq32 == 0) {
                    			
									if (eq11 / eq12 == eq21 / eq22
											&& eq11 / eq12 == eq31 / eq32
											&& eq21 / eq22 == eq31 / eq32) {
                        			xEqual = true;
                        			}
                				}
                				
                				eq11 = b - a;
								eq12 = q - p;
                			
                				eq21 = c - b;
								eq22 = r - q;
							
								eq31 = c - a;
								eq32 = r - p;
							
                				if (eq12 && eq11 % eq12 == 0
										&& eq22 && eq21 % eq22 == 0
										&& eq32 && eq31 % eq32 == 0) {
                    			
									if (eq11 / eq12 == eq21 / eq22
											&& eq11 / eq12 == eq31 / eq32
											&& eq21 / eq22 == eq31 / eq32) {
                        			yEqual = true;
                        			}
                				}
								
								if (xEqual && yEqual) {
									cout<<2<<endl;
								} else {
									
									if (a == b && b == c) {
										cout<<2<<endl;
									} else {
										cout<<3<<endl;										
									}

								}

							}
						}
					}
				}
			}
		}
    }
}
