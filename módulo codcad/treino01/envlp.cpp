#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	
	const int N = 1000 + 5;
	int v[N];

	int m, n;
	cin >>n;

	for(int i = 0; i < n; i++){
		cin >>v[i];
	}

	m = v[0];

	for(int i = 0; i < n; i++){
		if(v[i] < m) m = v[i];
	}
	cout <<m <<endl;

	return 0;
}
