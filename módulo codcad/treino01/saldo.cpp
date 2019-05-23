#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, s, i=0, m=s;
	cin >>n >>s;

	while(i<n){
		int x;
		cin >>x;
		s += x;

		if(s<m) m=s;

		i++;
	}
	
	cout <<m <<endl;

	return 0;
}
