#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	string s;
	cin >> s;
	int r=0, mx=0;
	for(int i=0; i<3; ++i) {
		if(s[i]=='R')
			r++;
		else
			r=0;
		mx=max(mx, r);
	}
	cout << mx << "\n";
}
