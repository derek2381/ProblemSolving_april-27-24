// problem link
// https://www.codechef.com/problems/MAXTASTE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, c, d, total = 0;
	    cin >> a >> b >> c >> d;

	    total = (a > b)? a : b;
	    total += (c > d)?c : d;
	    cout << total << endl;
	}

}
