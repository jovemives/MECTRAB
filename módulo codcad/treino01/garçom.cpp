#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, cont = 0;
	cin >>n;

	for(int i = 0; i < n; i++){
		int l, c;
		cin >>l >>c;

		if(l > c){
			cont += c;
		}
	}
	cout <<cont <<endl;

	return 0;
}
