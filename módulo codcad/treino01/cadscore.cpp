#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int p, n, f = 0;
	cin >>p >>n;

	for(int i = 0; i < n; i++){
		int x;
		cin >>x;

		p += x;

		if(p < 0) p = 0;
		if(p > 100) p = 100;
	}
	cout <<p <<endl;

	return 0;
}
