#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	const int N = 1e4 + 10;

	int n, x = 0, m = 1;
	cin >> n;
	int v1;
	cin >>v1;

	for(int i = 1; i < n; i++){
		int v2;
		cin >>v2;

		if(v1 == v2){
			m++;
		} else {
			m = 1;
		}

		x = max(x, m);
		v1 = v2;

	}
	cout <<x <<endl;

	return 0; 
}
