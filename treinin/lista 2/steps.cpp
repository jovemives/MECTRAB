#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	const int N = 1e5 + 100;
	int n;
	cin >> n;

	int v[N];
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	int cont = 1, ans = 1;
	for(int i = 1; i < n; i++){
			if(v[i-1] <= v[i])
				cont++;
			
			if(v[i-1] > v[i]){
				ans = max(ans,cont);
				cont = 1;
			}
		}
		ans = max(ans,cont);
		cout << ans << endl;
	
   	return 0;
}
