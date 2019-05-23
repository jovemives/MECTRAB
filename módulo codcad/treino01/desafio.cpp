#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x, m = 0;

	while(cin >>x){
		if(x > m){
			m = x;
		}

		if(x == 0){
			break;
		}
	}
	cout <<m <<endl;

	return 0;
}
