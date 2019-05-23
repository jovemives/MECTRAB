#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n,a,b,c,pieces = 0;
	cin >> n >> a >> b >> c;
	
	int ans = 0;
	for(int i = 0; i <= 4000; i++){
		for(int j = 0; j <= 4000; j++){
			int k = (n - i*a - j*b)/c;
			if (i*a + j*b + k*c == n) pieces = max(i + j + k, pieces);
		}
	}
	cout << pieces << endl;

	return 0;
}
